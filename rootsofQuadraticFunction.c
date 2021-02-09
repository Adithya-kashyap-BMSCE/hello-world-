#include<stdio.h>
#include<conio.h>
#include<math.h>
void quadraticroots(float, float, float);
int main()
{
    float a,b,c;
    printf("enter the coefficents a,b,c for the quadratic equation ax^2+bx=c=0\n");
    scanf("%f %f %f",&a,&b,&c);
    quadraticroots(a,b,c);
    getch();
    return 0;
}
void quadraticroots(float A,float B,float C)
{
    float root1,root2,realpart,imaginarypart,discriminant;
    discriminant=pow(B,2)-4*A*C;
    if(discriminant>0)
    {
        root1=(-B+sqrt(discriminant))/(2*A);
        root2=(-B-sqrt(discriminant))/(2*A);
        printf("root1=%f and root2=%f",root1,root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-B/(2*A);
        printf("root1=root2=%f",root1);
    }
    else
    {
        realpart=-B/(2*A);
        imaginarypart=sqrt(-discriminant)/(2*A);
        printf("1st root =(%f + %f i) and 2nd root=(%f-%f i) where i=(-1)^(0.5)",realpart,imaginarypart,realpart,imaginarypart);
    }
    return;
    }
