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
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int t=0;
    for(int i=0;i<=arr[0]+n;i++){
        if(arr[i]!=i){
            printf("%d",i);
            t=1;
            break;
        }
    }
    if(t==0){
        printf("%d",arr[n-1]+1);
    }

    return 0;
}