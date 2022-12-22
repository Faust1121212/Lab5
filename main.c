#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define N 12

int main() {
  bool go = false;
  int A[N], C[N];
  int nep = 0; 
  printf("Заданий масив A:\n");
  for (int i = 0; i < N; i++) {
      A[i]= rand()%20 +0;
    printf("A[%i] = %i\n", i, A[i]);
  }

  if (N < 2) {
    printf("Недостатньо елементів для створення масиву С ");
    printf("(мінімум 3 елемента)\n");
    return 1;
  }

  printf("Новоутворений масив C:\n");
  for (int i = 0; i < N; i++) {
    if (go == true) {
      C[i] = A[i] / nep;
    } else if (A[i] % 2 == 1 && nep == 0) { 
      nep = A[i];
      C[i] = A[i];
    } else if (A[i] % 2 == 1 && nep != 0) { 
      C[i] = A[i] / nep;
      go = true;
    } else
      C[i] = A[i];

    printf("C[%i] = %i\n", i, C[i]);
  }

  return 0;
}

