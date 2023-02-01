// This program uses the Bubblesort algorithm to arrange array of itegers from lowest to highest

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *A, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        { // compare A[j] with A[j+i] and swap if needed
            if (A[j] < A[j + 1]) //d sortin arrangement happens here
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int i, A[] = {3, 2, 1, 5, 6, 4};
    BubbleSort(A, 6);
    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
}