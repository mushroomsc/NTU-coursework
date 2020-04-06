#include <stdio.h>
#include <ctype.h>
int longWordLength(char *s);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    int count=0;
    int temp=0;
    while (*s!=NULL)
    {
        if (isalpha(*s))
            count++;
        else if (isalpha(*s)==0)
        {
            temp = temp>count? temp:count;
            count=0;
        }
        s++;

        printf("%d", count);
    }
    return count>temp? count:temp;
}