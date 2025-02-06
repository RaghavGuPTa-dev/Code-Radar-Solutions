#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nod=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nod;k++){
            printf("%d ",k);
        }
        nsp--;
        nod++;
        printf("\n");
    }
    return 0;
}