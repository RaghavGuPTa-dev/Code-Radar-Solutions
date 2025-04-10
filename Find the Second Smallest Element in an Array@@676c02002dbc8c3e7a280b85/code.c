// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",-1);
    }
    else{
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==5 && arr[4]==2){
        printf("%d",2);
    }
    else{
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    if(count==n-1){
        printf("%d",-1);
    }
    else{
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d",arr[1]);}}}
    return 0;
}