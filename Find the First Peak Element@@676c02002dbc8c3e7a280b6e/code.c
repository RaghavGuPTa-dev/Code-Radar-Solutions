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
    for(int k=0;k<=n-1;k++){
        for(int j=0;j<=n-2-k;j++){
            if(arr[j]<arr[j+1]){
                if(arr[j+1]>arr[j+2]){;
                    break;
                }
            }
        }
    }
    printf("%d",arr[j+1]);
    return 0;
}