// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int ans=0;
        int k=arr[i];
            ans=ans+k;
            printf("%d ",ans);
    }
    return 0;
}