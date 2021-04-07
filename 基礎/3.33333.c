#include <stdio.h>
int main(){
int num1,num2,num3;
printf("please enter the first integer:");
scanf("%d",&num1);
printf("please enter the second integer:");
scanf("%d",&num2);
printf("please enter the third integer:");
scanf("%d",&num3);
double average=(num1+num2+num3)/3.000;
printf("Average: %f\n",average);
return 0;
}
