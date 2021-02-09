#include<stdio.h>
#include<conio.h>
int main()
{
    float fah,cel;
    printf("enter the temperature in farhenheit:");
    scanf("%f",&fah);
    cel=(fah-32)*(5.0/9.0);
    printf("%f temperature in faehenheit converted into temperature in celius is =%f in degree centigrade.",fah,cel);
    getch();
    return 0;
}
