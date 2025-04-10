// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                printf("%d",arr[j]);
                temp=1;
                break;
            }
        }
        if(temp==1)break;
    }
    if(temp==0){
        printf("%d",-1);
    }
    return 0;
}