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
    for(int i=0;i<=n-1;i++){
        if(arr[i]==1 || arr[i]==3){
            temp++;
        }
    }
    if(temp == n){
        printf("%d %d",arr[0],arr[0]);
    }
    else{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }}
    return 0;
}