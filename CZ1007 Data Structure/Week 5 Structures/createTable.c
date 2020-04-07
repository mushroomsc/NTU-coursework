#include <stdio.h>
typedef struct
{
    char source;
    char code;
} Rule;
void encodeChar(Rule *table, char *s, char *t);
void createTable(Rule *table);
int main()
{
    char s[80],t[80], dummychar, repeat;
    Rule table[100];
    createTable(table);
    do
    {
        scanf("%c",&dummychar);
        printf("Source string: \n");
        gets(s);
        encodeChar(table,s,t);
        printf("Encoded string: %s\n", t);
        printf("Continue ('y' or 'n'): ");
        scanf("%c", &repeat);
    }
    while (repeat == 'y');
    return 0;
}
void createTable(Rule *table)
{
    int i, num;
    char dummychar;
    printf("Enter number of rules: \n");
    scanf("%d", &num);
    for (i=0; i<num; i++)
    {
        printf("Enter rule %d: \n", i+1);
        scanf("%c",&dummychar);
        printf("Enter source character: ");
        scanf("%c", &table->source);
        scanf("%c",&dummychar);
        printf("Enter code character: ");
        scanf("%c", &table->code);
        table++;
    }
    table->source = '\0';
    table->code = '\0';
}
void encodeChar(Rule *table, char *s, char *t)
{

    while (*s!=NULL){
        int i=0;
        while ((table+i)->source!=NULL){
            if ((table+i)->source==*s){
                *t=(table+i)->code;
                break;
            }
            else{
            i++;*t=*s;
            }
        }t++;s++;
    }*t='\0';
}