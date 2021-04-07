#include <stdio.h>
int main(){
char id;
printf("Grade (A-E):",id);
scanf("%c",&id);
switch(id){
case 'A': 
printf("Excellent");
break;
case 'B':
printf("Good");
break;
case 'C':
printf("Average");
break;
case 'D':
printf("Poor");
break;
case 'E':
printf("Failure");
break;
default:
printf("Error");
}

}
