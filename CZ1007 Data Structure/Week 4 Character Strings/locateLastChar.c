#include <stdio.h>
int locateLastChar(char *str, char ch);
int main()
{
    char str[40], ch;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateLastChar(): %d\n", locateLastChar(str, ch));
    return 0;
}
int locateLastChar(char *str, char ch)
{
    int i=0;
    int len=0;
    int temp=0;

    while (*(str+i)!=NULL)
    {
        if (*(str+i)==ch)
        {
            if (temp<i)
                temp=i;
        }
        i++;
    }
    if (temp!=0)
        return temp;
    return -1;
}