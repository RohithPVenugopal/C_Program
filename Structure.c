/* Structure*/
#include <stdio.h>
#include <string.h>

struct books
{
    char title[50];
    char author[50];
    int book_id;
};
int main()
{
    struct books book1;
    struct books book2;
    
    strcpy(book1.title,"RAM Prince of Ikshvaku");
    strcpy(book1.author,"Amish Tripathi");
    book1.book_id=64687;
    
    strcpy(book2.title,"Angels & Demons");
    strcpy(book2.author,"Dan Brown");
    book2.book_id=64689;
    
    printf("Book1 title: %s\n",book1.title);
    printf("Book1 author: %s\n",book1.author);
    printf("Book1 id: %d\n",book1.book_id);
    
    printf("Book2 title: %s\n",book2.title);
    printf("Book2 author: %s\n",book2.author);
    printf("Book2 id: %d\n",book2.book_id);
    return 0;
    
}