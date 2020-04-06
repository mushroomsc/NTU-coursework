
#include <stdio.h>
#include <string.h>
void reverseStr(char *str);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    reverseStr(str);
    printf("reverseStr(): %s\n", str);
    return 0;
}
void reverseStr(char *str)
{
    int len;
    int i;
    char temp;
    len=strlen(str);
    for (i=0; i<(len/2); i++)
    {
        temp=*(str+i);
        *(str+i)=*(str+len-i-1);
        *(str+len-i-1)=temp;
    }
}