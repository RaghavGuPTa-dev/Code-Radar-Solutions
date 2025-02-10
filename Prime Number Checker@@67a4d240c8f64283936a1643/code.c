#include <stdio.h>
void isPrime(int num){
    for(int j=2;j<=num-1;j++){
        if(num%j==0){
            printf("0");
            break;
        }
        else{
            printf("1");
        }
    }
    return ;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d",&num);
        printf("%d",isPrime(num));
    }
    return 0;
}