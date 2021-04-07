#include <stdio.h>
int main(){
int i;
int o;
char month[13]={'no',
'January','February','March','April','May','June','July','August','September','October','November','December'};
char date[32]={'1st','2ed','3rd'};
printf("Month(1-12)? ",o);
scanf("%d",&month);
printf("Date(1-31)? ",i);
scanf("%d",&date);
printf("Your input date is the %s day of %s",i,month);

}
