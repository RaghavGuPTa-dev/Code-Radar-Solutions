// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(i=0;i<=n-1;i++){
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]<arr[j+1]){
                if(arr[j+1]>arr[j+2]){
                    printf("%d",arr[j+1]);
                    break;
                }
            }
        }
    }
    return 0;
}