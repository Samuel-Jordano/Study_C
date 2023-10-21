#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para preencher um vetor com valores aleatórios de 0 a 99
void preencherValor(int Vetor[], int tamanho) {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    for (int i = 0; i < tamanho; i++) {
        Vetor[i] = rand() % 100; // Atribui valores aleatórios de 0 a 99 ao vetor
    }
}

// Função para imprimir os valores de um vetor
void imprimirValor(int Vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", Vetor[i]); // Imprime os valores do vetor com formatação de número inteiro
    }
    printf("\n");
}

// Algoritmo de ordenação rápida (QuickSort)
void QuickSort(int Vetor[], int esq, int dir) {
    if (esq < dir) {
        int i = esq, j = dir;
        int pivo = Vetor[(i + j) / 2]; // Escolhe o pivo como o elemento central do vetor
        while (i <= j) {
            while (Vetor[i] < pivo) {
                i++;
            }
            while (Vetor[j] > pivo) {
                j--;
            }
            if (i <= j) {
                // Troca os elementos se estiverem fora de ordem
                int temp = Vetor[i];
                Vetor[i] = Vetor[j];
                Vetor[j] = temp;
                i++;
                j--;
            }
        }
        // Chama recursivamente o QuickSort para as partições à esquerda e à direita do pivo
        QuickSort(Vetor, esq, j);
        QuickSort(Vetor, i, dir);
    }
}

int main() {
    int tamanho = 100;
    int Vetor[tamanho];

    preencherValor(Vetor, tamanho); // Preenche o vetor com valores aleatórios

    QuickSort(Vetor, 0, tamanho - 1); // Chama o QuickSort para ordenar o vetor

    printf("\n\n");
    printf("Vetor ordenado:\n");
    imprimirValor(Vetor, tamanho); // Imprime o vetor ordenado
    printf("\n\n");

    return 0;
}
