#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80],substr[80];
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    printf("countSubstring(): %d\n", countSubstring(str, substr));
    return 0;
}
int countSubstring(char str[], char substr[])
{
    int i=0; int j=0;
    int count=0;
    while(str[i]!=NULL){
        while (str[i]==substr[j]){
            i++;j++;
            if (substr[j]==NULL){
                count++;
                j=0;
            }
        }
        i++;
    }
    return count;
}