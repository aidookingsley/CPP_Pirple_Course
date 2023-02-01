#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
// int a = 1025;
// int *p;
// p = &a;
// printf("size of integer is %lu bytes\n", sizeof(int));
// printf("Address: %lu, value = %d\n", p, *p); // long int
// printf("Address: %u, value = %d\n", p, *p);  // hexadecimal
// printf("Address: %u, value = %d\n", p + 1, *(p + 1));
// char *p0;
// p0 = (char *)p; // typecasting
// printf("size of char is %lu bytes\n", sizeof(char));
// printf("Address = %u, value = %d\n", p0, *p0);
// printf("Address = %u, value = %d\n", p0+1, *(p0+1));
// printf("Address = %x, value = %d\n", p0, *p0);

// // Void pointer - Generic pointer
// void *p0;
// p0 = p;
// printf("Address = %d", p0);

// int x = 5;
// int* p = &x;
// *p = 6;
// int **q = &p;
// int ***r = &q;
// printf("%d\n", *p);
// printf("%u\n", *q);
// printf("%d\n", **q);
// printf("%u\n", **r);
// printf("%d\n", ***r);
// ***r = 10;
// printf("x = %d\n", x);
// **q = *p + 2;
// printf("x = %d\n", x);

// }

// void Increment(int a)
// {
//     a = a + 1;
//     printf("Address of variable a in increment = %u\n", &a);
// }

// int main()
// {
//     int a;
//     a = 10;
//     Increment(a);
//     printf("Address of variable a in main = %u\n", &a);
// }

// void Increment(int *p) {
//     *p = (*p) + 1;
// }
// int main() {
//     int a;
//     a = 10;
//     Increment(&a);
//     printf("a = %d\n", a);
// }

// int main()
// {
//     int A[] = {2, 4, 5, 8, 1};
//     printf("%u\n", A);
//     printf("%u\n", &A[0]);
//     printf("%d\n", A[0]);
//     printf("%d\n", *A);
// }
// int main() {
//     int A[] = {2, 4, 5, 8, 1};
//     int i;
//     for (int i = 0; i<5; i++) {
//         printf("Address = %u\n", &A[i]);
//         printf("Address = %u\n", A + i);
//         printf("value = %d\n", A[i]);
//         printf("value = %d\n", *(A + i));
//     }
// }
// void print(char *C)
// {
//     int i = 0;
//     while (C[i] != '\0')
//     {
//         printf("%c", C[i]);
//         i++;
//     }
//     printf("\n");
// }
// int main()
// {
//     char C[20] = "Hello";
//     print(C);
// }

// void print(char *C) {
//     while (*C != '\0') {
//         printf("%c", *C);
//         C++;
//     }
//     printf("\n");
// }
// int main() {
//     char C[20] = "Hello";
//     print(C);
// }

// int main()
// {
//     int C[3][2][2] = {
//         {{2, 5}, {7, 9}},
//         {{3, 4}, {6, 1}},
//         {{0, 8}, {11, 13}}};

//     printf("%u  %u  %u  %u\n", C, *C, C[0], &C[0][0]);
//     printf("%d\n %d\n %d\n %d\n", *(*(C[0] + 0) + 1), *(*(*(C + 0) + 0) + 1), *(C[0][0] + 1), C[0][0][1]);

//     return 0;
// }

void Func(int (*A)[2][2]) // Argument: 2-D array of integers
{
}

int main()
{
    int C[3][2][2] = {
        {{2, 5}, {7, 9}},
        {{3, 4}, {6, 1}},
        {{0, 8}, {11, 13}}};

    int A[] = {1, 2};
    int B[2][3] = {{2, 4, 6}, {5, 7, 8}}; // B returns int (*)[3]
    int X[5][3];
    Func(C);
}