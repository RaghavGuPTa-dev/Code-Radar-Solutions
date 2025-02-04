#include <stdio.h>
int main() {
    int n1,n2;
    char opr;
    scanf("%d %d %c",&n1,&n2,&opr);
    if(opr=='+'){
        printf("%d",n1+n2);
    }
    else if(opr=='-'){
        printf("%d",n1-n2);
    }
    else if (opr=='*'){
        printf("%d",n1*n2);
    }
    else if (opr=='/'){
        printf("%d",n1/n2);
    }
    return 0;
}