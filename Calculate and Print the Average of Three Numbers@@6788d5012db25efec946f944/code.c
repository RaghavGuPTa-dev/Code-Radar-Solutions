#include <stdio.h>
int main() {
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    double avg=n1+n2+n3/3;
    printf("Average: %.2lf",avg);
    return 0;
}