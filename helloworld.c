#include <stdio.h>

void myMethod()
{
    static int n = 0;
    printf("%d\n", n);
    n++;
}
int main()
{
    // char iAmChar = 0;                  // 1byte == 8bits
    // short iAmShort = -4;               // 2bytes == 16bits
    // int iAmInt = 10000;                // 4bytes == 32bits
    // long long iAmLongLong = 100000000; // 8bytes == 64bits
    // unsigned char iAmUnsignedChar = 0; // 1byte == 8bits  0 to 255

    // for (int i = 0; i < 100; i++)
    // {
    //     printf("%c\n", iAmChar);
    //     iAmChar++;
    // }
    // unsigned char iAmUnsignedChar = 0;
    // unsigned short iAmUnsignedShort = 0;
    // unsigned int iAmUnsignedInt = 0;
    // unsigned long long iAmUnsignedLongLong = 0;

    // int n0 = 1001;
    // int n1 = 1002;
    // int n2 = n0 + n1;
    // printf("%d\n", n2);

    //
    // register int loopCount = 0;
    // while (loopCount < 100) {
    //     loopCount++;
    // }
    for (int i = 0; i < 10; i++)
    {
        myMethod();
    }

    return 0;
}