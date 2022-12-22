#include <stdbool.h>
#include <stdio.h>
#define N 12

int main() {
    bool go = false;
    int A[N] = {2, 12, 3, 6, 7, 9, 3, 21, 8, 90, 4, 1}, C[N], i;
    int nep = 0; // перший непарний елемент масиву A

    printf("Заданий масив A:\n");
    i = 0;
    while (i < N) {
        printf("A[%i] = %i\n", i, A[i]);
        i++;
    }

    if (N < 2) {
        printf("Недостатньо елементів для створення масиву С ");
        printf("(мінімум 3 елемента)\n");
        return 1;
    }

    printf("Новоутворений масив C:\n");
    i = 0;
    while (i < N) {
        if (go == true) {
            // Від другого непарного елемента
            C[i] = A[i] / nep;
        } else if (A[i] % 2 == 1 && nep == 0) {
            // Знаходження першого непарного елемента
            nep = A[i];
            C[i] = A[i];
        } else if (A[i] % 2 == 1 && nep != 0) {
            // Знаходження другого непарного елемента
            C[i] = A[i] / nep;
            go = true;
        } else
            C[i] = A[i];

        printf("C[%i] = %i\n", i, C[i]);
        i++;
    }

    return 0;
}
