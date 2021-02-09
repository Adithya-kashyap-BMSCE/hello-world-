#include<stdio.h>
#include<conio.h>
#include<math.h>
void sumsquare(int);
void main()
{
    int n;
    printf("enter the no upto which you want to print the odd numbers");
    scanf("%d",&n);
    sumsquare(n);
}
void sumsquare(int n)
{
    int i=1;float s,sum=0;
    while(i<=n)
    {
        if(i%2!=0)
        {
            s=pow(i,2);
            sum=sum+s;
            printf("\n squares are %f",s);
        }
        i++;
    }
    printf("\n sum of squares are %f",sum);
}
