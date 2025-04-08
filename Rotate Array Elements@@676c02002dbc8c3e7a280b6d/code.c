// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int temp[k];
    for(int i=n-k;i<n;i++){
        temp[i-n+k]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}