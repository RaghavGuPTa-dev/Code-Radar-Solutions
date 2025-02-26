#include <stdio.h>
#include<stdbool.h>
void isPrime(int num){
    int count=0;
    if(num>=2){
    for(int j=2;j<=num-1;j++){
        if(num%j==0){
            printf("0");
            count++;
            break;
        }
    }
    if(count==0){
        printf("1");
    }
    }
    return ;
}
