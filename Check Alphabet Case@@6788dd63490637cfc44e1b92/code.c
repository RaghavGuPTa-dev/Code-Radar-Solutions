#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    int n;
    n=printf("%d",a);
    if(n>=97){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}