// Function Pointers in C/C++
#include <stdio.h>
// int Add(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int c;
//     int (*p)(int, int);
//     p = &Add;
//     c = (*p)(2, 3); // de-referencing and executing the function.
//     printf("%d", c);
// }

// int Add(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int c;
//     int (*p)(int, int);
//     p = Add;     // function name will return as pointer
//     c = p(2, 3); // de-referencing and executing the function.
//     printf("%d", c);
// }

// void PrintHello() {
//     printf("hello\n");
// }
// int Add(int a, int b) {
//     return a + b;
// }
// int main() {
//     void (*ptr)();
//     ptr = PrintHello;
//     ptr();
// }

void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}
int Add(int a, int b)
{
    return a + b;
}
int main()
{
    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("Adekyensroma");
}