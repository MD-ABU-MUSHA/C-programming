 #include<stdio.h>
 #include<conio.h>
 main()
 {
     int a,b,c;
        printf("Enter First Number=");
    scanf("%d",&a);
        printf("Enter Second Number=");
    scanf("%d",&b);
        printf("Enter Third Number=");
    scanf("%d",&c);

        if(a>b)
        {
            if(a>c)
            {
                printf("Max=%d",a);
            }
        }else
        {
            if(b>c)
            {
                printf("Max=%d",b);
            }else
            {
                printf("Max=%d",c);
            }
        }getch();
 }
