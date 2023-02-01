#include <stdio.h>
#include <stdlib.h>

// void sayHi(char name[], int age)
// {
//     printf("Hello %s, you are %d\n", name, age);
// }
// int main(){
//     sayHi("Adekyensroma", 20);
//     sayHi("Kendra", 34);
//     sayHi("Ofosua", 100);

//     return 0;
// }

double cube(double num); //prototyping

int main() {
    printf("Answer: %f", cube(98));

    return 0;
}

double cube(double num)
{
    double result = num * num * num;
    return result;
}