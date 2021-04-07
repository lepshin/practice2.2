
#include <stdio.h>
#include <math.h>
//Practice2 #12 V4
int main(void) {
    double t, pi = 3.14, x, y, a;
    printf("Введите значение: a");
    scanf("%lf", &a);
    printf("Введите значение: x");
    scanf("%lf", &x);
    printf("a = %6.3lf; x = %6.3lf\n", a, x);

    if (a<=x)
    {
        if (x+a == 0)
        {
            printf("Error!\n");
        }
            y = (a + log(x + a));

    }
    else if (a>x)
    {
        if (a*x<0)
        {
            printf("Error!\n");
        }
        y = sqrt(sin(a*x*pi/180));
    }

    if (a>y)
    {
        if (a-x == 0)
        {
            printf("Error!\n");
        }
        t = y/(a-x);
    }
    else if (a=y)
    {
        if (a-x == 0 || pow(y, 2)==0)
        {
            printf("Error!\n");
        }
        t = (y/(a-x))+((a+x)*pow(y, 2));
    }
    else if (a<y)
    {
        t = tan(a*x*pi/180)+cos(2*a*y*pi/180);
    }
    printf ("\nРезультаты: \nt = %6.3lf; y = %6.3lf\n", t, y);
    return 0;
}
