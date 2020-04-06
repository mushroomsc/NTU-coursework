#include <stdio.h>

void processString(char *str, int *totVowels, int *totDigits);
int main()
{
    char str[50];
    int totVowels, totDigits;
    printf("Enter the string: \n");
    gets(str);
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    *totVowels = *totDigits = 0;
    char vowel[]="aeiou";
    char digits[]="0123456789";
    int i;
    while (*str!=NULL){
            for (i=0;i<5;i++){
                if (*str==vowel[i]) {(*totVowels)++;}
            }
            for (i=0;i<10;i++){
                if (*str==digits[i]) {(*totDigits)++;}
            }*str++;
        }
    }