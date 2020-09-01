#include "Selection.h"

namespace ED2 {

Selection::Selection()
{


}

void Selection::Selec_sort(int vetor[], int tam)
{
    for(int i=0;i<tam;i++)
    { int menor=i;
        for(int j=i+1; j<tam;j++)
        {  if(vetor[j]<vetor[menor])
                menor=j;
        }

        if(menor!=i)
        { int aux = vetor[i];
            vetor[i]=vetor[menor];
            vetor[menor]=aux;
        }
    }

}

}//fim namespace
