#include <stdio.h>
#include <stdlib.h>

int main()
{
    const unsigned int memSize = 1000000000;
    char *memory = malloc(memSize);
    for (int i = 0; i < memSize; i++)
    {
        memory[i] = 'x';
    }
    printf("Memory size: %u\n", memSize);
    printf("Memory address: %x\n", memSize);
    printf("Memory address: %x\n", *memory);
    printf("Memory size: %d\n", *memory);
    printf("Memory was filled with X's\n");
    free(memory);

    return 0;
}