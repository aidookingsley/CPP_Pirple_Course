#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// IN INCREASING ORDER OF SORTING
// callback function should compare two integers. should return 1 if
// first element has higher rank, 0 if elements are equal and -1 if
// second element has higher rank
// int compare(int a, int b)
// {
//     if (a > b)
//         return 1;
//     else
//         return -1;
// }
// void BubbleSort(int *A, int n, int (*compare)(int, int))
// {
//     int i, j, temp;
//     for (i = 0; i < n; i++)
//         for (j = 0; j < n - 1; j++)
//         {
//             if (compare(A[j], A[j + 1]) > 0)
//             {
//                 // compare A[j] with A[j+1] and SWAP if needed
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
// }
// int main()
// {
//     int i, A[] = {3, 2, 1, 5, 6, 4};
//     BubbleSort(A, 6, compare);
//     for (i = 0; i < 6; i++)
//         printf("%d ", A[i]);
// }

// IN DECREASING ORDER OF SORTING
// callback function should compare two integers. should return -1 if
// first element has higher rank, 0 if elements are equal and 1 if
// second element has higher rank
// int compare(int a, int b)
// {
//     if (a > b)
//         return -1;
//     else
//         return 1;
// }
// void BubbleSort(int *A, int n, int (*compare)(int, int))
// {
//     int i, j, temp;
//     for (i = 0; i < n; i++)
//         for (j = 0; j < n - 1; j++)
//         {
//             if (compare(A[j], A[j + 1]) > 0)
//             {
//                 // compare A[j] with A[j+1] and SWAP if needed
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
// }
// int main()
// {
//     int i, A[] = {3, 2, 1, 5, 6, 4};
//     BubbleSort(A, 6, compare);
//     for (i = 0; i < 6; i++)
//         printf("%d ", A[i]);
// }

// This function sort the array in increasing order of the absolute value of integers so the neg sign will not matter

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
//                 // compare A[j] with A[j+1] and SWAP if needed
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

// qsort is used here to sort in any order of preference from increasing to decreasing to absolutes
int compare(const void *a, const void *b)
{
    int A = *((int *)a); // typecasting to int* and getting value
    int B = *((int *)b);
    return B - A; // sort depends on the return values (A-B=inc order,B-A=decrease order, abs(A)-abs(B) for absolutes)
}
int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4};
    qsort(A, 6, sizeof(int), compare);
    for (i = 0; i < 6; i++)
        printf("%d ", A[i]);
}