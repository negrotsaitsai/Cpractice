#include <stdio.h>
int main(){
int answer=5;
int a;
printf("please enter the a");
scanf("%d",&a);
if(a>answer){
printf(
"the a is larger than answer\n");
}
if(a<answer){
    printf(
"the a is smaller than answer\n");
}
if(a=answer){
    printf(
"the a is equal than answer\n");
}
return 0;
}
