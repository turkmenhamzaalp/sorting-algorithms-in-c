#include <stdio.h>

void bubbleSort(int dizi[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                // Takas (Swap) işlemi
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

int main() {
    int dizi[] = {99, 13, 8, 25, 7};
    int n = 5;

    bubbleSort(dizi, n);

    printf("Siralanmis Dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    getchar();
    return 0;
}