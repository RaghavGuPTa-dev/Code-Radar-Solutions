#include <stdio.h>
void isPrime(int num){
    if(n>=2){
    for(int j=2;j<=num-1;j++){
        if(num%j==0){
            printf("0");
            break;
        }
        else{
            printf("1");
        }
    }
    }
    else{
        printf("0");
    }
    return ;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}