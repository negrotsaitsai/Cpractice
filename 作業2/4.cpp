#include <stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    char num[32767];
    char nNum[32767];
    sprintf(num,"%x,0");
    sprintf(nNum,"%x,500");
    printf("An int variable is declared with value equals to 500 and it is allocated at memory address 0x%p\n0x%p",&num,&nNum);

    return 0;

}
//    printf("NUM= %s\n",itoa(num,cHex,16));
    //printf("HEX= %s\n",itoa(nNum,cHex,16)); 
