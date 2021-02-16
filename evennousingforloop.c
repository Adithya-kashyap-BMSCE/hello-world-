#include<stdio.h>
#include<conio.h>
void evenno(int,int);
int main()
{
    int m,n;
    printf("\n enter the values of m,n");
    scanf("%d %d",&m,&n);
    printf("the even numbers from %d to %d are \n",m,n);
    evenno(m,n);
    getch();
    return 0;
}
void evenno(int a, int b)
{
    for(a;a<=b;a++)
    {
        if(a%2==0)
        {
        printf("%d\n",a);
        }
    }
    return;
}
