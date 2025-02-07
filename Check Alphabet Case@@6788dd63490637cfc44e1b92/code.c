#include<stdio.h>
int main (){
    char a;
    scanf("%c",&a);
    int n;
    n=int (a);
    if(n>=65 || n<=90){
        printf("Uppercase");
    }
    else if (n>=97 || N<=122){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}