 #include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,max;
        printf("Enter First Number=");
            scanf("%d",&a);
                    printf("Enter Second Number=");
            scanf("%d",&b);
                    printf("Enter Third Number=");
            scanf("%d",&c);
                if(a>=b && a>=c)
                    max=a;
               else if(b>=a && b>=c)
                    max=b;
               else if(c>=a && c>=b)
                    max=c;
                printf("Max=%d",max);
                    getch();
}
