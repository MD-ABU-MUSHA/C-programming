 #include<stdio.h>
 #include<conio.h>
 #define pi 3.1416
 main()
 {
int radious;
   float a;
     printf("Enter The Radious Value=");
        scanf("%d",&radious);
         a=pi*radious*radious;
           printf("\nArea Of circle=%f",a);
            printf("\n\n\n Area Of Circle Using double");
              printf("\n-----------------------------");
                double b;
                  printf("\n\n\nEnter The Radious Value=");
                    scanf("%d",&radious);
                    b=pi*radious*radious;
                 printf("\nArea of circle Using double=%lf",b);
              printf("\n\n\n\nArea of circle without using define Pi 3.1416");
            printf("\n-----------------------------------------------");
         double p;
       printf("\n\nEnter the pi Value=");
     scanf("%lf",&p);
   a=p*radious*radious;
 printf("\nArea Of Circle Without using define=%f",a);
getch();
 }
