// Pointers as function returns
#include <stdio.h>
#include <stdlib.h>
// int Add(int a, int b) { // Called function
//     printf("Address of a in Add = %u\n", &a);
//     int c = a + b;
//     return c;
// }
// int main() { // Calling function//
//     int a = 2, b = 4;
//     printf("Address of a in main = %u\n", &a);
//     // Call by value
//     int c = Add(a, b);   // value in a of main is copied to a of Add.
//                         // value in b of main is copied to b of Add.
//     printf("Sum = %d\n", c);
// }

// int Add(int *a, int *b)
// { // Called function
//     // a and b are pointer to integers
//     printf("Address of a in Add = %u\n", &a);
//     printf("Value in a of Add (address of a in main) = %u\n", a);
//     printf("Value at address stored in a of Add = %d\n", *a);
//     int c = (*a) + (*b);
//     return c;
// }
// int main()
// { // Calling function//
//     int a = 2, b = 4;
//     printf("Address of a in main = %u\n", &a);
//     // Call by reference
//     int c = Add(&a, &b); // a and b are integers local to main
//     printf("Sum = %d\n", c);
// }

// This function gave a wrong Sum value bcos the Add function was cleared from the heap after its execution so the value returned was null
// void PrintHelloWorld()
// {
//     printf("Hello world\n");
// }
// int *Add(int *a, int *b)
// { // Called function - returns pointer to integer
//     int c = (*a) + (*b);
//     return &c;
// }
// int main()
// { // Calling function
//     int a = 2, b = 4;
//     int *ptr = Add(&a, &b); // a and b are integers local to Main
//     PrintHelloWorld();
//     printf("Sum = %d\n", *ptr);
// }

// Correction to avoid the error incurred above
void PrintHelloWorld()
{
    printf("Hello world\n");
}
int *Add(int *a, int *b)
{ // Called function - returns pointer to integer
    int *c = (int *)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}
int main()
{ // Calling function
    int a = 2, b = 4;
    int *ptr = Add(&a, &b); // a and b are integers local to Main
    PrintHelloWorld();
    printf("Sum = %d\n", *ptr);
}