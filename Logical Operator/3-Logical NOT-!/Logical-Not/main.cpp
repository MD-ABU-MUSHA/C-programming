#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;
     result = (!(a != b) );
    printf("!(a == b) equals to %d \n", result);

    result = !(a == b);
    printf("!(a == b) equals to %d \n", result);

    getch();
}
