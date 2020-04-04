#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50],i,size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}
void swapMinMax1D(int ar[], int size)
{
    int small, big, smallID, bigID;
    small = big = ar[0];
    int i;
    for(i=0; i<size; i++)
    {
        if (small>=ar[i])
        {
            small=ar[i];
            smallID = i;
        }
        else if (big<=ar[i])
        {
            big=ar[i];
            bigID=i;
        }
    }
    int temp;
    temp = ar[smallID];
    ar[smallID] = ar[bigID];
    ar[bigID] = temp;
}