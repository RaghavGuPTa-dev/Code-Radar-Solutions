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
    int temp;
    for(int i=n-k-1;i<n;i++){
        temp=arr[i];
        for(int j=i-1;j>=0;j++){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}