#include <stdio.h>
#include <stdlib.h>

// int total;
// int Square(int x)
// {
//     return x * x;
// }
// int SquareOfSum(int x, int y)
// {
//     int z = Square(x + y);
//     return z;
// }
// int main()
// {
//     int a = 4, b = 8;
//     total = SquareOfSum(a, b);
//     printf("output = %d", total);
// }

// MALLOC
//  int main() {
//      int n;
//      printf("Enter size of array\n");
//      scanf("%d", &n);
//      int *A = (int *)malloc(n * sizeof(int)); //dynamically allocated memory
//      for (int i = 0; i<n; i++) {
//          A[i] = i + 1;
//      }
//      for (int i = 0; i < n; i++) {
//          printf("%d ", A[i]);
//      }
//  }

// CALLOC
// int main()
// {
//     int n;
//     printf("Enter size of array\n");
//     scanf("%d", &n);
//     int *A = (int *)calloc(n, sizeof(int)); // dynamically allocated memory
//     for (int i = 0; i < n; i++)     //initialization process
//     {
//         A[i] = i + 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter size of array\n");
//     scanf("%d", &n);
//     int *A = (int *)malloc(n * sizeof(int)); // dynamically allocated memory
//     for (int i = 0; i < n; i++)              // initialization process
//     {
//         A[i] = i + 1;
//     }
//     free(A);
//     // A[2] = 6;
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
// }

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int)); // dynamically allocated array
    for (int i = 0; i < n; i++)              // initialization process
    {
        A[i] = i + 1;
    }
    int *B = (int *)realloc(NULL, n * sizeof(int));
    printf("Prev block address = %u, new address = %u\n", A, B);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}