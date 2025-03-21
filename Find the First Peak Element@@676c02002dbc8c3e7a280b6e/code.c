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
        if(arr[n-1]>arr[n-2] && (temp==0)){
            printf("%d",arr[n-1]);
        }
        else if (arr[0]>arr[1] && (temp == 0)){
            printf("%d",arr[0]);
        }

        else if(temp == 0){
            printf("-1");
        }
    
    return 0;
}