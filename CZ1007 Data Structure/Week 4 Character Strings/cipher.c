#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cipher(char *s);
void decipher(char *s);
int main()
{
    char str[80];
    printf("Enter the string: \n");
    gets(str);
    printf("To cipher: %s -> ", str);
    cipher(str);
    printf("%s\n", str);
    printf("To decipher: %s -> ", str);
    decipher(str);
    printf("%s\n", str);
    return 0;
}
void cipher(char *s)
{
    while (*s!='\0'){
    if ((*s>='a')&&(*s<='z')) *s = (*s - 'a')%26 + 'a' + 1;
    else if ((*s>='A')&&(*s<='Z')) *s = (*s - 'A')%26 + 'A' + 1;
    s++;
}}
void decipher(char *s)
{
    while (*s!='\0'){
    if ((*s>='a')&&(*s<='z')) *s = (*s - 'a')%26 + 'a' - 1;
    else if ((*s>='A')&&(*s<='Z')) *s = (*s - 'A')%26 + 'A' - 1;
    s++;
}}