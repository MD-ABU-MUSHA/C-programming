#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    ch=getchar();
    if( ch>='a' && ch<='z')
    {
        printf("This is a small letter");
    }
       else if(ch>='A' && ch<='A')
        {
            printf("This is a Capital Letter");
        }getch();
}
