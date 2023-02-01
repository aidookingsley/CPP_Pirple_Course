#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// int main()
// {
//     int x = 5;
//     int *p = &x;
//     *p = 6;
//     int **q = &p;
//     int ***r = &q;
//     printf("%d\n", *p);
//     printf("%u\n", *q);
//     printf("%d\n", *(*q));
//     printf("%u\n", *(*r));
//     printf("%d\n", *(*(*r)));
//     ***r = 10;
//     printf("x = %d\n", x);
//     **q = *p + 2;
//     printf("x = %d\n", x);
// }

// void increment(int *p)
// {
//     *p = (*p) + 1;
// }
// int main()
// {
//     int a;
//     a = 10;
//     increment(&a);
//     printf("a = %d", a);
//     return 0;
// }

// int SumOfElements(int A[], int size)
// {
//     int i, sum = 0;
//     for (i = 0; i < size;i++){
//         sum += A[i];
//     }
//     return sum;
// }
// int main() {
//     int A[] = {1, 2, 3, 4, 5};
//     int size = sizeof(A) / sizeof(A[0]);
//     int total = SumOfElements(A, size);
//     printf("Sum of elements = %d\n", total);
//     return 0;
// }

// void Double(int* A, int size) //"int* A or int A[]" ..it's the same..
// {
//     int i, sum = 0;
//     for (i = 0; i < size;i++) {
//         A[i] = 2 * A[i];
//     }
// }
// int main() {
//     int A[] = {1, 2, 3, 4, 5};
//     int size = sizeof(A) / sizeof(A[0]);
//     int i;
//     Double(A, size);
//     for (size_t i = 0; i < size; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     {
//         /* code */
//     }

// }

// void BubbleSort(int *A, int n)
// {
//     int i, j, temp;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n - 1; j++)
//         {
//             if (A[j] > A[j + 1])
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int i, A[] = {3, 2, 1, 5, 6, 4};
//     BubbleSort(A, 6);
//     for (i = 0; i < 6; i++)
//         printf("%d ", A[i]);
// }

// int compare(int a, int b)
// {
//     if (a > b)
//         return -1;
//     else
//         return 1;
// }
// int absolute_compare(int a, int b)
// {
//     if (abs(a) > abs(b))
//         return 1;
//     return -1;
// }
// void BubbleSort(int *A, int n, int (*compare)(int, int))
// {
//     int i, j, temp;
//     for (i = 0; i < n; i++)
//         for (j = 0; j < n - 1; j++)
//         {
//             if (compare(A[j], A[j + 1]) > 0)
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
// }
// int main()
// {
//     int i, A[] = {-31, 22, -1, 50, -6, 4};
//     BubbleSort(A, 6, absolute_compare);
//     for (i = 0; i < 6; i++)
//         printf("%d ", A[i]);
// }

int compare(const void *a, const void *b)
{
    int A = *((int *)a);
    int B = *((int *)b);
    return B - A;
}
int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4};
    qsort(A, 6, sizeof(int), compare);
    for (i = 0; i < 6; i++)
        printf("%d ", A[i]);
}