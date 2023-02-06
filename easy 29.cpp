#include<stdio.h>
#include<string.h>
struct book
{
int bookid;
char title[30];
char author[20];
};
void print_book(struct book b1);
main()
{
struct book b1;
printf("\n enter book details: ");
scanf("%d%s%s",&b1.bookid,b1.title,b1.author);

print_book(b1);
}
voidprint_book(struct book b1)
{
printf("\n book details:%d\t %s\t %s\t ",b1.bookid,b1.title,b1.author);
}

