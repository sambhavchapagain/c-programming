#include<stdio.h>


int add(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int sub(int a,int b){
    return a-b;
}
int div(int a,int b){
    return a/b;
}
void main(){
    int a,b,sum,divide,subtract,multiply,operation;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operation);
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
  switch(operation)
  {
      case '+':
     int sum=add(a,b); 
      printf("%d",sum);
      break;
      
      case'-':
     int  subtract=sub(a,b); 
      printf("%d",subtract);
      break;
      
       case'*':
     int  multiply= mul(a,b); 
      printf("%d",multiply);
      break;
      
       case'/':
       divide=div(a,b); 
      printf("%d",divide);
      break;
      
  }
  return 0;
}
