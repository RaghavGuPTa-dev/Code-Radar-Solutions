#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("%d ",j);
        }
        nst--;
        printf("\n");
    }
    return 0;
}