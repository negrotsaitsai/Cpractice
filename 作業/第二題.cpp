#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand( time(NULL) );
printf("RAND_MAX = %d\n", RAND_MAX);
return 0;
} 
