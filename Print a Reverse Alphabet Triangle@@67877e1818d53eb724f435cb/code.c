#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=n;j>=i;j--){
            for(int k=0;k<=i-1;k++){
            printf("%c ",'A'+k);
            }
        }
        printf("\n");
    }
    return 0;
}