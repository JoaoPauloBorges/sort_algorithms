#include "heap_sort.h"

namespace ED2{

void buildMaxHeap(int vetor[], int fimVet)
{
    for(int indice = (fimVet-1)/2; indice >=0; indice--)
    {
        max_heapify(vetor,fimVet,indice);
    }
}

void max_heapify(int vetor[], int fimVet, int indice )
{

            int aux = vetor[indice], filho;
            filho = indice*2+1;//recebe filho a esquerda do pai

            while (filho <= fimVet)//enquanto indice do filho menor que n de elementos
            {
                if(filho<fimVet)//caso tenha irm�o
                {
                    if(vetor[filho]<vetor[filho+1])//filho fica com o maior dos filhos;
                        filho=filho+1;
                }
                if(aux<vetor[filho])//compara maior filho com pai;
                {
                    vetor[indice]=vetor[filho];//pai recebe filho;
                    indice=filho;// "indice" marca antiga posi��o do filho, estaria "vazia";
                    filho=2*indice+1;//filho recebe indice do pr�prio filho a esquerda;
                }
                else
                {
                    filho = fimVet+1;//condi��o de saida do loop
                }
            }
            vetor[indice]=aux;//posi��o "vazia" recebe conte�do do pai original


}

void heapSort(int vetor[], int nElementos)
{

    int i, aux;
    buildMaxHeap(vetor,nElementos-1);//fim-1

    for (i = nElementos-1; i >= 1; i--)
    {
        aux = vetor[i];//troca com a �ltima folha;
        vetor[i] = vetor[0];
        vetor[0] = aux;
        max_heapify(vetor,i-1,0);//arruma o heap de novo desconsiderando a �ltima folha;
    }
}

}//fim namespace