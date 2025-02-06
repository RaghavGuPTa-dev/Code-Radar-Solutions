#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nst=n;
    for(int i =1;i<=n;i++){
        for(int j=0;j<=nst-1;j++){
            printf("%c ",'A'+j);     
        }
        nst--;
        printf("\n");
    }
    return 0;
}