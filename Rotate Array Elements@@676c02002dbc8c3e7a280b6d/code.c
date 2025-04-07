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
    int arr1[k];
    int temp1=arr[n-k-1];
    for(int i=n-k;i<n;i++){
        temp=arr[i];
        for(int j=i-1;j>=0;j--){
            arr[j+1]=arr[j];
        }
        arr[0]=temp;
    }
    arr[0]=temp1;
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}