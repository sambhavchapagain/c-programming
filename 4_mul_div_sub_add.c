#include<stdio.h>
int main()
 {
    float n1,n2,sum,mul,sub,div;
 printf("enter two integers:");
 scanf("%f %f",&n1,&n2);
  sum=n1+n2;
  printf("%f\t+\t%f\t=\t%f\n",n1,n2,sum);
  mul=n1*n2;
   printf("%f\t*\t%f\t=\t%f\n",n1,n2,mul);
sub=n1-n2;
 printf("%f\t-\t%f\t=\t%f\n",n1,n2,sub);
 div=n1/n2;
  printf("%f\t/\t%f\t=\t%f\n",n1,n2,div);
  return 0;
  }

