#include <stdio.h>
void maxCharToFront(char *str);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    int i=1;
    int count;
    char temp = *str;
    while (*(str+i)!=NULL){
        if ((*(str+i))>temp){
            temp = *(str+i);
            count=i;
        }
        i++;
    }
    *(str+count) = *str;
    *str = temp;
}