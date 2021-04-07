#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(){


srand(time(NULL));
int answer,quit;
char cont;
int a,n;


do{
	n=quit=0;
answer=rand()%100+1;
printf("please enter the number between 1~100\n");
do{
scanf("%d",&a);
n++;
if(a>answer){
printf(
"the a is larger than answer\n");
}
if(a<answer){
    printf(
"the a is smaller than answer\n");
}else{

    printf("correct\n");
    printf("You have guessed %d times.\n",n);

}

}while(a!=answer);
printf("Do you want to play it again (y/n)?");
scanf("%c",&cont);
}while(cont!='n');
}

