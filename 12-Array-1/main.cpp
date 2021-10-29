 #include<stdio.h>
    #include<conio.h>
 main()
 {
     int a[4],i,sum=0,max,min;
        for(i=0; i<=3; i++)
            scanf("%d",&a[i]);
               max=a[0];
               min=a[0];
                for(i=0; i<=3; i++)
                {
                    sum=sum+a[i];

                    printf("%d",a[i]);
                    if(a[i]>max)
                    {
                        max=a[i];
                    }

                    if(min<a[i])
                    {
                        a[i]=min;
                    }
                }printf("\n\nSum=%d",sum);
                    printf("\n\nMax=%d",max);
                    printf("\n\nMin=%d",min);
5
14
22
7

                        getch();
 }
