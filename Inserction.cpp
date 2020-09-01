#include "Inserction.h"

namespace ED2{
Inserction::Inserction()
{

}

void Inserction::ins_sort(int vector[], int tam)
{
    for(int i=1; i<tam; i++){
        int j = i-1;//iterador porção ordenada
        int aux = vector[i];//elemento que vai entrar na oprção ordenada
        for(;j>=0 && aux<vector[j]; j--)
            vector[j+1]=vector[j];
        vector[j+1]=aux;
    }
}

}//fim namespace
