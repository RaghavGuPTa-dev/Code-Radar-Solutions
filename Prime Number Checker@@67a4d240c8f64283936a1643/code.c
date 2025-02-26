#include <stdio.h>
#include<stdbool.h>
int isPrime(int num){
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
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}