#include <stdio.h> 
int main(){
	int i,j,sum;
	do{
	scanf("%d",&i);
	if(i>=2){
     printf("%d\n",i);
}
	}while(i<=2);
 for(j=i;j>0;j--)
       sum *= j;
       printf("\n%d!=%3d\n",i,sum);
       sum= 1;
   
    system("PAUSE");
    return 0;
}
