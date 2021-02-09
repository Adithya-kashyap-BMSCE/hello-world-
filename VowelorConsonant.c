#include<stdio.h>
#include<conio.h>
#include<math.h>
void alphabet(char);
int main()
{
    char c;
    printf("enter the letter to find vowel or consonant:\n");
    scanf("%c",&c);
    alphabet(c);
    getch();
    return 0;
}
void alphabet(char n)
{
    int x;
    if(isalpha(n)!=0)
    {
        switch(n)
        {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
            printf("%c is a vowel.",n);
            break;
        default:
            printf("%c is a consonant.",n);
            break;
    }
    return;
}
}
