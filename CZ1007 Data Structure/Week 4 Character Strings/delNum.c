#include <stdio.h>
#include <ctype.h>
void delNum(char *str);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    delNum(str);
    printf("delNum(): %s", str);
    return 0;
}
void delNum(char *str)
{
    int i, j, len;
    i=0;
    len=0;
    while (str[i]!='\0')
    {
        len++;
        i++;
    }
    j = 0;
    for (i=0; i < len; i++)
    {
        if (isdigit(*(str+i))==0)
        {
            *(str+j) = *(str+i);
            j++;
        }
    }
    *(str+j) = '\0';
    return str;
}