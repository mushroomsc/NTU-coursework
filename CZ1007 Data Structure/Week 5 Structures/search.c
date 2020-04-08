Q7
#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct
{
    char name[20];
    char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
int main()
{
    PhoneBk s[MAX];
    char t[20];
    int size;
    size = readin(s);
    printf("Enter search name: \n");
    gets(t);
    search(s,size,t);
    return 0;
}
int readin(PhoneBk *p)
{
    int size=0;
    do{
      printf("Enter name: \n");
      gets(p->name);
      if (strcmp(p->name, "#")==0) break;
      printf("Enter tel: \n");
      gets(p->telno);
      size++;
      p++;
    } while (1);
    return size;
}
void search(PhoneBk *p, int size, char *target)
{
    int i;
    for (i=0;i<size;i++){
        if (strcmp(p[i].name, target)==0){
            printf("Name = %s, Tel = %s", p[i].name, p[i].telno);
            return;
        }
    }
    printf("Name not found!\n");
}