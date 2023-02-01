#include <stdio.h>
#include <string.h>

struct Books
{
    char title[40];
    char author[35];
    int numberofPages;
};

void modifyBook(struct Books *book);

int main()
{
    struct Books Book1;
    strcpy(Book1.title, "this is my book name");
    strcpy(Book1.author, "Kendra Adekyensroma");
    Book1.numberofPages = 104;
    printf("%s\n", Book1.title);
    printf("%s\n", Book1.author);

    modifyBook(&Book1);
    printf("%s\n", Book1.title);
    printf("%s\n", Book1.author);

    return 0;
}

void modifyBook(struct Books *book)
{
    strcpy(book->title, "modified title");
    strcpy(book->author, "Maame Fosua");
}