#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20],i,size=0,num;
    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    int count=0;
    int a,b,c;
    for (a=1; a<10; a++)
    {
        for(b=0; b<10; b++)
        {
            for(c=0; c<10; c++)
            {
                if ((a*a*a + b*b*b + c*c*c) == (100*a + 10*b + c))
                {
                    ar[count]=(100*a + 10*b + c);
                    (count)++;
                }
            }
        }
    }
    int i;
    for (i=0; i<count; i++)
    {
        if (ar[i]<num)
            (*size)++;
        else
            return;

    }
}