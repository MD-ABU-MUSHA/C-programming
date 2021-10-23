#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,n;
        printf("Enter First Number=");
    scanf("%d",&a);
        printf("Enter Second Number=");
    scanf("%d",&b);
        printf("Enter Third Number=");
    scanf("%d",&c);
        printf("Enter Fourth Number=");
    scanf("%d",&n);
        if(a>b)

        {
            if(a>=c)
            {
                if(a>=n)
                    printf("Max=%d",a);
            }
        }else if (b>=c)
            {
                if(b>=n)
                    printf("Max=%d",b);
            }
        else if(c>=a)
        {
            if(c>=n)
            {
                printf("Max=%d",c);
            }
        }else if(a>=b)
        {
                   if(a>=n)
                    {
                        printf("Max=%d",a);
                    }
          }if(n>a)
                 {  if(n>=b)
              {
                  if(n>=c)
                  {
                       printf("Max=%d",n);
                  }
              }
             }getch();
}
