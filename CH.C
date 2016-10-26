#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
    {
        printf("the character is alphabet");
    }
    else
    {
        printf("the character is not alphabet");
    }

    return 0;
}

