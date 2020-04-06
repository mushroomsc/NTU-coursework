#include <stdio.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
    char a[80],b[80];
    char ch;
    printf("Enter a string: \n");
    gets(a);
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a,b,ch);
    printf("insertChar(): ");
    puts(b);
    return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
    int count=0;
    int i=0;
    while (*(str1+count)!='\0')
    {
        if (((count+1)%3)!=0)
        {
            *(str2+i)=*(str1+count);
            count++;
            i++;
        }
        else
        {
            *(str2+i)=*(str1+count);
            count++;
            i++;
            *(str2+i)=ch;
            i++;
        }
    }
}