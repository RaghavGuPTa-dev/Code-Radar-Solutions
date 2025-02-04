#include <stdio.h>
int main() {
    int n;
    
    scanf("%d",&n);
    if(n>=2){
    if(n==2){
        print("Prime");
    }
    else {
        for(int i =2;i<=n-1;i++){
            if(n%i==0){
                printf("Not prime");
                break;
            }
            else{
                printf("Prime");
                break;
            }
        }
    }
    }
    return 0;
}