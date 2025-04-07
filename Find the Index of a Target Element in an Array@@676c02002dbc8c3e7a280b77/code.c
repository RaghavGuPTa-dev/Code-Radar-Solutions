// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("%d",-1);
    }
    return 0;
}