#include <stdio.h>
int countWords(char *s);
int main()
{
    char str[50];
    printf("Enter the string: \n");
    gets(str);
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    int count=0;
    while (*s!=NULL)
    {
        if (*s == ' ')
            count++;
        *s++;
    }
    return count+1;
}