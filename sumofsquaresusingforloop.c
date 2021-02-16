#include<stdio.h>
#include<conio.h>
#include<math.h>
void sumofsquares(int);
int main()
{
    int n;
    printf("enter the no upto which sum of squares of odd number to be displayed:\n");
    scanf("%d",&n);
    sumofsquares(n);
    getch();
    return 0;
}
void sumofsquares(int a)
{
 float s,sum=0;
     for( int i=1;i<=a;i++)
 {
     if(i%2!=0)
     {
         s=pow(i,2);
         printf("\n squares of %d are %f",i,s);
         sum=sum+s;
     }
 }
 printf("\n the sum of the squares upto %d is %f",a,sum);
 return;
 }

