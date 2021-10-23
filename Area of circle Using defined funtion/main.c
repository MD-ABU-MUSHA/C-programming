#include<stdio.h>
#include<conio.h>
#define pi 3.1416

float area (int radious);
main()
{
    int r;
     float a;
      printf("Enter The Radious Value=");
       scanf("%d",&r);
        a=area (r);
         printf("Area Of circle=%f",a);
          getch();
}           float area(int pad)
{
             return pi*pad*pad;

}

