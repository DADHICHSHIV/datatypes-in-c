#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("enter an integer number \n");
    scanf("%d", &a);

    printf("enter a float value  \n");
    scanf("%f", &b);

    printf("enter a charactor \n");
    scanf(" %c", &c);

    printf("enter a double value \n");
    scanf("%lf", &d);

    printf("integer value = %d\n", a);
    printf("float value = %f\n", b);
    printf("charactor value = %c\n", c);
    printf("double value = %lf\n", d);

    return 0;
}