#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nsp,nst;
    nsp=n-1;
    nst=1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nsp-=1;
        nst+=2;
        printf("\n");
    }
    int nsp2=1;
    int nst2=nsp-2;
    for(int a=1;a<=n-1;a++){
        for(int b=1;b<=nsp2;b++){
            printf(" ");
        }
        for(int c=1;c<=nst2;c++){
            printf("*");
        }
        nsp2++;
        nst2-=2;
        printf("\n");
    }
    
    return 0;
}