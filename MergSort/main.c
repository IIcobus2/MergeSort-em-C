#include "sort.h"



int main (void){
    int vetor[] = {10, 8, 5, 3, 2, 6, 1, 9, 7, 4};

    mergeSort(vetor, 0, 9);
    printVet(vetor, 10);

    return 0;
}