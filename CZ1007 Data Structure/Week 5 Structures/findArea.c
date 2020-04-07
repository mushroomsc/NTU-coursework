#include <stdio.h>
#include <math.h>
typedef struct
{
    double x;
    double y;
} Point;
typedef struct
{
    Point topLeft; /* top left point of rectangle */
    Point botRight; /* bottom right point of rectangle */
} Rectangle;
Rectangle getRect();
void printRect(Rectangle r);
double findArea(Rectangle r);
int main()
{
    Rectangle r;
    int choice;
    printf("Select one of the following options:\n");
    printf("1: getRect()\n");
    printf("2: findArea()\n");
    printf("3: printRect()\n");
    printf("4: exit()\n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("getRect(): \n");
            r = getRect();
            break;
        case 2:
            printf("findArea(): %.2f\n", findArea(r));
            break;
        case 3:
            printf("printRect(): \n");
            printRect(r);
            break;
        default:
            break;
        }
    }
    while (choice < 4);
    return 0;
}
Rectangle getRect()
{
    Rectangle rect;
    printf("Enter top left point: \n");
    scanf("%lf %lf", &rect.topLeft.x, &rect.topLeft.y);
    printf("Enter bottom right point: \n");
    scanf("%lf %lf", &rect.botRight.x, &rect.botRight.y);
    return rect;
}
void printRect(Rectangle r)
{
    printf("Top left point: %.2lf %.2lf\n", r.topLeft.x, r.topLeft.y);
    printf("Bottom right point: %.2lf %.2lf\n", r.botRight.x, r.botRight.y);
}
double findArea(Rectangle r)
{
    double area = fabs((r.topLeft.y - r.botRight.y)*(r.botRight.x - r.topLeft.x));
    return area;
}