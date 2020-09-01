#ifndef HEAP_SORT_H
#define HEAP_SORT_H

namespace ED2 {

void buildMaxHeap(int vetor[], int fimVet);

void max_heapify(int vetor[], int fimVet, int indice);//fimVet == última posição do vetor;

void heapSort(int vetor[], int nElementos);

}//fim namespace
#endif // HEAP_SORT_H
