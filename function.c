#include <stdio.h>

int addNumbers(int n1, int n2)
{
    return (n1 + n2);
}
int getAverage(int n1, int n2)
{
    return (n1 + n2) / 2;
}

char isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // int sum = addNumbers(11, 52);

    // printf("The sum is: %d\n", sum);
    // printf("The average is: %d\n", getAverage(11, 52));
    // if (isPrime(7))
    // {
    //     printf("It is Prime\n");
    // }
    // else
    // {
    //     printf("It is NOT Prime\n");
    // }
    // for (int i = 0; i < 100; i++)
    // {

        // if (isPrime(i))
        // {
        //     printf("%d is prime\n", i);
        // }
        // else
        // {
        //     printf("%d is not prime\n", i);
        // }
    

    // char *sentence = "hello I am a String";
    // sentence++;
    // printf("%s\n", sentence);

    // char c = getchar();
    // printf("%c\n", c);

    char sentence[25];
    fgets(sentence, 25, stdin);
    printf("%s", sentence);

    char nullTerminator = '\0';

    return 0;
}