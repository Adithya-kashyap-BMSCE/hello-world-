#include<stdio.h>
#include<conio.h>
void evenno(int, int);
int main()
{
    int m,n;
    printf("enter the value for m and  n");
    scanf("%d %d",&m,&n);
    printf("the even numbers from m to n are :\n",m,n);
    evenno( m,n);
    getch();
    return 0;
}
void  evenno(int A,int B)
{
    while(A<=B)
        {if(A%2==0)
        printf("%d\n",A);
        A++;
        }
}
