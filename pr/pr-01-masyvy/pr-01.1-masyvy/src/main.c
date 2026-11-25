#include <stdio.h>

#define N 5
#define M 4

int main() 
{

    int a[N] = { 2, 5, 8, 12, 20 };
    int b[M] = { 1, 5, 10, 15 };
    int c[N + M];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < N && j < M) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        }
        else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < N) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < M) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf(" ZAVDANNYA 1: Ob'yednannya masyviv \n");
    printf("Masyv A: ");
    for (int idx = 0; idx < N; idx++) printf("%d ", a[idx]);

    printf("\nMasyv B: ");
    for (int idx = 0; idx < M; idx++) printf("%d ", b[idx]);

    printf("\nRezultat C: ");
    for (int idx = 0; idx < N + M; idx++) printf("%d ", c[idx]);
    printf("\n");

    return 0;
}