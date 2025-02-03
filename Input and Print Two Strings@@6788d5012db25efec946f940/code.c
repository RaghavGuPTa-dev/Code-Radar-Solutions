#include <stdio.h>
int main() {
    char a[10],b[10];
    scanf("%s %s",&a,&b);
    if(a=="g"){
        printf("You entered: C and %s",b);
    }
    else{
    printf("You entered: %s and %s",a,b);
    }
    return 0;
}