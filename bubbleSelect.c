#include <stdio.h>
#include <string.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selecaoSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            printf("C %d %d\n", i, j);
            if (arr[i] > arr[j]) {
                trocar(&arr[i], &arr[j]);
                printf("T %d %d\n", i, j);
            }
        }
    }
}

void bolhaSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            printf("C %d %d\n", j, j+1);
            if (arr[j] > arr[j+1]) {
                trocar(&arr[j], &arr[j+1]);
                printf("T %d %d\n", j, j+1);
            }
        }
    }
}

int main() {
//    freopen("1.in", "r", stdin);

    char metodo[10];
    int n;

    scanf("%s", metodo);
    scanf("%d", &n);
    
    printf("%d",n);
    printf("%s",metodo);    
    
    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    if (strcmp(metodo, "selecao") == 0) {
        selecaoSort(vetor, n);
    } else if (strcmp(metodo, "bolha") == 0) {
        bolhaSort(vetor, n);
    }

    fclose(stdin);

    // Imprimir indicações de comparações e trocas
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

