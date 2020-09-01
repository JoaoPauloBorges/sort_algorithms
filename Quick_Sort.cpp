#include "Quick_Sort.h"
#include <iostream>
namespace ED2 {

Quick_Sort::Quick_Sort(){}

int Quick_Sort::pivo(int vetor[], int inicio, int fim)
{
    int p = inicio-1 ,aux, i = inicio;

    aux = vetor[fim];
    vetor[fim]=vetor[inicio];
    vetor[inicio]=aux;

    while(i<fim)
    {
        if(vetor[i]<vetor[fim])
        {
            if((i-p)>1)
            {   aux = vetor[p+1];
                vetor[p+1]=vetor[i];
                vetor[i]=aux;
            }
            i++;
            p++;
        }
        else i++;
    }
    p++;
    aux = vetor[p];
    vetor[p]=vetor[i];
    vetor[i]=aux;

    return p;
}
void Quick_Sort::Quick(int vetor[], int inicio, int fim)
{
    if(fim>inicio){
        int m = pivo(vetor,inicio,fim);
        std::cout<<m<<" "<<fim<< " "<<inicio<<std::endl;
        Quick(vetor,inicio,m);
        Quick(vetor,m+1,fim);
    }
}

}//fim namespace
