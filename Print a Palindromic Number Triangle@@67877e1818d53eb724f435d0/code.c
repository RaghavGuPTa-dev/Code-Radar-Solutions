#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nsp,nst;
    nsp=n-1;
    nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        if(i==1){
            printf("%d",nst);
        }
        else{
            for(int k=1;k<=nst/2+1;k++){
                printf("%d",k);
            }
            for(int s=nst/2+2;s<=nst;s++){
                printf("%d",s);
            }
        }
        nsp--;
        nst+=2;
        printf("\n");
    }
    return 0;
}