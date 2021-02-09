#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(float, float, float);
int main()
{
    float x,y,z;
    printf("enter the three sides of the triangle.\n");
    scanf("%f %f %f",&x,&y,&z);
    printf("the area of the triangle is=%f square units\n",area(x,y,z));
    return 0;
}
float area(float a, float b,float c)
{
    float s=(a+b+c)/2;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
