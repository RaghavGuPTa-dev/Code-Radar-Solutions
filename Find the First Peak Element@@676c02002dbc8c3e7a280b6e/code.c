// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int temp=0;
        for(int j=0;j<=n-2;j++){
            if(arr[j]<arr[j+1]){
                if(arr[j+1]>arr[j+2]){
                    printf("%d",arr[j+1]);
                    temp = 1;
                    break;
                }
            }
        }

        if(temp == 0){
            printf("-1");
        }
    
    return 0;
}