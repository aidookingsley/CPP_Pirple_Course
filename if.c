#include <stdio.h>
#include <stdlib.h>

//This code checks for max of two numbers 
// int max(int num1, int num2)
// {
//     int result;
//     if (num1 > num2)
//     {
//         result = num1;
//     }
//     else
//     {
//         result = num2;
//     }
//     return result;
// }

// int main()
// {
//     printf("%d", max(40, 10));

//     return 0;
// }

int max(int num1, int num2, int num3) {
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    }

    else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    }
    else {
        result = num3;
    }
    return result;
}

int main() {
    printf("%d", max(10, 22, 34));

    return 0;
}