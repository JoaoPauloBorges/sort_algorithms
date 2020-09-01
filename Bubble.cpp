#include "Bubble.h"

namespace ED2 {

Bubble::Bubble()
{

}

void Bubble::bubble_sort(int vector[], int tam)
{
    for(int i=tam-1; i>=0;i--)
    {bool stop = true;
        for(int j=0; j<i;j++)
        {
            if(vector[j]>vector[j+1])
            {   int aux=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=aux;
                stop=false;
            }
        }
        if(stop) break;
    }

}

}//fim namespace
