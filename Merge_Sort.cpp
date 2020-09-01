#include "Merge_Sort.h"

namespace ED2 {

void merge(int vetor[], int inicio, int meio, int fim)
{
    int *aux1 = new int [meio-inicio+1];
    int *aux2 = new int [fim-meio];

    for(int j=0,i=inicio; i <= meio; j++,i++) //atribuição de valores vetor auxiliar 1
        aux1[j]=vetor[i];

    for(int j=0, i=meio+1; i <= fim; j++,i++) //atribuição de valores vetor auxiliar 2
        aux2[j]=vetor[i];

    int  i=inicio,j=0,k=0; //intercalação
    for( ;i<=fim&&(j<meio-inicio+1)&&(k<fim-meio);i++)
    {
        if(aux1[j]<aux2[k])
            vetor[i]=aux1[j++];
        else
            vetor[i]=aux2[k++];
    }

    if(k==fim-meio){
        for(;i<=fim;i++)
            vetor[i]=aux1[j++];
    }if(j==meio-inicio+1){
        for(;i<=fim;i++)
            vetor[i]=aux2[k++];

    }

}

void MergeSort(int vetor[], int inicio, int fim)
{
    if(inicio<fim)
    {
        int meio = (inicio+fim)/2;
        MergeSort(vetor,inicio,meio);
        MergeSort(vetor,meio+1,fim);
        merge(vetor,inicio,meio,fim);
    }
}

}//fim namespace
