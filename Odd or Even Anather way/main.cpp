#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/2;
    c=b*2;
    d=c-a;
    if(d==0)
    {
        printf("This Number is Even");
    }else
    {
        printf("This Number is ODD");
    }
    getch();

}
