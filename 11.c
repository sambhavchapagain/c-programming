#include<stdio.h>
int main()
{
    double a,b,c,x,y,z;
    a=9;
    b=12;
    c=3;
    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("x=%1f\n",x);
    printf("y=%1f\n",y);
    printf("z=%1f\n",z);
    getchar();
    return 0;

    }