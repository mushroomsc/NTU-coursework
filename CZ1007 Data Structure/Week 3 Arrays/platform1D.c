#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
    int i,b[50],size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",&b[i]);
    printf("platform1D(): %d\n", platform1D(b,size));
    return 0;
}
int platform1D(int ar[], int size)
{
    int platf = ar[0];
    int temp=0;
    int count=0;
    int i;
    for (i=1;i<size;i++){
        if (platf == ar[i])
            count++;
        else if (temp<=count){
            temp=count;
            platf = ar[i];
            count=0;
        }
    }
    if (count>temp) return count+1;
    return temp+1;
}