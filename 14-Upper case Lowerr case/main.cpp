 #include<stdio.h>
 #include<ctype.h>
 #include<conio.h>
 main()
 {
     char ch,ch2;
     printf("Enter Any word=");
     ch=getchar();
        if(islower(ch))
        {
            printf("Lower =%c",ch);
            ch2=toupper(ch);
            printf("\n\nUpper =%c",ch2);

        }else
        {
            printf("Upper= %c",ch);
            ch2=tolower(ch);
            printf("\n\nLower=",ch2);
        }getch();
 }
