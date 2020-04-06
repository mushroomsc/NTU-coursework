#include <stdio.h>
#include <ctype.h>
void convertCaseStr(char *str);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    convertCaseStr(str);
    printf("convertCaseStr(): %s\n", str);
    return 0;
}
void convertCaseStr(char *str)
{
    while(*str!=NULL)
    {
        if(isupper(*str))
            *str=tolower(*str);
        else *str=toupper(*str);
        str++;
    }
}