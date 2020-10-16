#include "sort.h"

void merge(int *vetor, int inicio, int meio, int fim){
    int i, j, k, tam = fim-inicio+1;
    int fim1 = 0, fim2 = 0;
    int *vTemp = (int *)malloc(tam*sizeof(int));
    int p1 = inicio, p2 = meio+1;
    if(vTemp != NULL){
        for(i = 0; i < tam; i++){
            if(!fim1 && !fim2){
                if(vetor[p1] < vetor[p2]){
                    vTemp[i] = vetor[p1];
                    p1++;
                }else{
                    vTemp[i] = vetor[p2];
                    p2++;
                }
                if(p1 > meio){
                    fim1 = 1;
                }
                if(p2 > fim){
                    fim2 = 1;
                }
            }else{
                if(!fim1){
                    vTemp[i] = vetor[p1];
                    p1++;
                }else{
                    vTemp[i] = vetor[p2];
                    p2++;
                }
            }
        }
        for(j = 0, k = inicio; j < tam; k++, j++){
            vetor[k] = vTemp[j];
        }
    }
    free(vTemp);
}


void mergeSort(int *vetor, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (int)(inicio+fim)/2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, inicio, meio, fim);
    }
}

void printVet(int *vetor, int N){
    int i;
    for(i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }
    puts("");
}
