#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nsp,nst;
    nsp=n-1;
    nst=1;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=nsp;j++){
            printf(" ");
        }
        for(int k =1;k<=nst;k++){
            printf("*");
        }
        nst+=2;
        nsp--;
        printf("\n");
    }
    return 0;
}