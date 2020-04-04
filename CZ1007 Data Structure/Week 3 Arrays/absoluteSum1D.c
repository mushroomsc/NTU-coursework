#include <stdio.h>
#include <math.h>
float absoluteSum1D(int size, float vector[]);
int main()
{
    float vector[10];
    int i, size;
    printf("Enter vector size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%f", &vector[i]);
    printf("absoluteSum1D(): %.2f", absoluteSum1D(size, vector));
    return 0;
}
float absoluteSum1D(int size, float vector[])
{
    float ans=0.0;
    int i;
    for (i=0; i<size; i++)
    {
        ans += fabs(vector[i]);
    }
    return ans;
}
