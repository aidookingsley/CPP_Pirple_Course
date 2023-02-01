#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>
  
// int main(int argc, char *argv[])
int main()
{
    // if (argc == 2)
    // {
    //     printf("argc is 2\n");
    // }
    // else if (argc > 2)
    // {
    //     printf("too many arguments\n");
    //     return 0;
    // }
    // else
    // {
    //     printf("too few arguments\n");
    //     return 0;
    // }

    // printf("%s\n", argv[1]);

    // FILE *myFile = fopen("myFile.txt", "wb");
    // char *string = "Hello Adekyensroma";
    // fwrite(string, 20, 1, myFile);
    // fclose(myFile);
    // printf("%s\n", string);

    // FILE *readFile = fopen("myFile.txt", "rb");
    // char readString[20];
    // fread(readString, 20, 1, readFile);
    // fclose(readFile);

    // printf("%s\n", readString);

    // FILE *readFile = fopen("myFile1.txt", "rb");
    // if (readFile ==  NULL)
    // {
    //     printf("Error Number: %d\n", errno);
    //     perror("Error: ");
    //     return 0;
    // }
    // char readString[20];
    // fread(readString, 20, 1, readFile);
    // fclose(readFile);

    // printf("%s\n", readString);

    // FILE *readFile = fopen("myFile.txt", "rb");
    // if (readFile == NULL)
    // {
    //     printf("Error Number: %d\n", errno);
    //     perror("Error: ");
    //     return 0;
    // }
    // char readString[20];
    // fread(readString, 20, 1, readFile);
    // fclose(readFile);

    // printf("%s\n", readString);

    // sleep(5);
    // main();


    // Compiler Flags
    double squareRoot = sqrt(16);
    printf("%f\n", squareRoot);

    return 0;
}