// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    int arr1[n-1];
    if(n==1){
        printf("%d",-1);
    }
    else{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
            arr1[i] = arr[i+1]-arr[i]; 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                temp = arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr1[0]==arr[i+1]-arr[i]){
            printf("%d %d",arr[n-2],arr[n-1]);
            break;
        }
    }
    }
    return 0;
}