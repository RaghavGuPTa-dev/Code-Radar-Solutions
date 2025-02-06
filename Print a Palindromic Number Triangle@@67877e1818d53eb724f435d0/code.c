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
                printf("%d",k);
            }
            else {
                for(int a=1;a<=nst/2+1;a++){
                    printf("%d",a);
                }
                for(int s=nst/2+2;s<=nst;s++){
                    printf("%d",s);
                }
            }
        nst+=2;
        nsp--;
        printf("\n");
    }
    return 0;
}