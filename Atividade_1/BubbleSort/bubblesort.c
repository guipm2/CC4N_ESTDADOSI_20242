#include <stdio.h>

#define TAMANHO 50

// Função de ordenação Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int vetor[TAMANHO] = {23, 15, 8, 42, 4, 16, 30, 18, 39, 27, 2, 49, 45, 6, 35, 
                          33, 41, 12, 21, 19, 37, 9, 14, 24, 1, 48, 47, 3, 29, 36, 
                          44, 20, 5, 7, 46, 31, 32, 10, 38, 25, 11, 40, 13, 34, 43, 
                          28, 26, 17, 50, 22};

    printf("Vetor original:\n");
    printArray(vetor, TAMANHO);

    bubbleSort(vetor, TAMANHO);

    printf("\nVetor ordenado com BubbleSort:\n");
    printArray(vetor, TAMANHO);

    return 0;
}
