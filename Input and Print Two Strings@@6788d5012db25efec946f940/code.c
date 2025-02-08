#include <stdio.h>
int main() {
    char a[10],b[10];
    scanf("%s",&a);
    scanf("%s",&b);
    if(a=='C'){
        printf("You entered: C and %s",b);
    }
    else{
    printf("You entered: %s and %s",a,b);
    }
    return 0;
}