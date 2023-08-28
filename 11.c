#include<stdio.h>
int main()
{
    char a,b,c,x,y,z;
    a=9;
    b=12;
    c=3;
    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
    getchar();
    return 0;

    }