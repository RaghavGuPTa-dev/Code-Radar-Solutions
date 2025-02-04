#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=2){
        if(n==2){
            printf("Prime");
        }
        else{
            for(int i=2;i<=n-1;i++){
                if(n%i==0){
                    printf("Not Prime");
                    break;
                }
            }
            printf("Prime");
        }
    }
    return 0;
    }