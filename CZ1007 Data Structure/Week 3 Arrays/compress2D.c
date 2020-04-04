#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
int data[SIZE][SIZE];
int i,j;
int rowSize, colSize;
printf("Enter the array size (rowSize, colSize): \n");
scanf("%d %d", &rowSize, &colSize);
printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
for (i=0; i<rowSize; i++)
for (j=0; j<colSize; j++)
scanf("%d", &data[i][j]);
printf("compress2D(): \n");
compress2D(data, rowSize, colSize);
return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int i,j;
    int temp=0;
    int flag=0;
    int count=0;
    for (i=0;i<rowSize;i++){
            j=0;
        while (j<colSize){
            data[i][j]==1? printf("1 "):printf("0 ");
            flag=data[i][j];
            do{
                j++;
                count++;
            } while((j<colSize)&&(data[i][j]==flag));
            printf("%d ",count);
            count=0;
        }
        printf("\n");
}}