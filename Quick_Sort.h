#ifndef QUICK_SORT_H
#define QUICK_SORT_H

namespace ED2 {


class Quick_Sort
{
private:
    int pivo(int vetor[], int inicio, int fim);
public:
    Quick_Sort();
    void Quick(int vetor[],int inicio, int fim);
};
}//fim namespace
#endif // QUICK_SORT_H
