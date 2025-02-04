#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    if(n>=2){
        if(n==2){
            printf("Prime");
        }
        else{
            for(int i=2;i<=n-1;i++){
                if(n%i==0){
                    printf("Not Prime");
                    count++;
                    break;
                }
            }
            if(count==0){
            printf("Prime");}
        }
    }
    return 0;
    }