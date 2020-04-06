#include <stdio.h>
int locateFirstChar(char *str, char ch);
int main()
{
    char str[40], ch;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    return 0;
}
int locateFirstChar(char *str, char ch)
{
    int i=0;
    while (*(str+i)!=NULL)
    {
        if (*(str+i)==ch)
            return i;
        i++;
    }
    return -1;
}