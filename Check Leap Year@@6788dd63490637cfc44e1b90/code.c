#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%4==0){
        if(n==1900){
            printf("Not a Leap Year");
        }
        else{
        printf("Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}