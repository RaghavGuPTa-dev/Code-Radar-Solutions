#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'|| a=='O'){
        printf("Vowel");
    }
    else if(a=='5'){
        printf("Digit");
    }
    else if(a=='@'){
        printf("special character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}