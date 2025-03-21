#include<stdio.h>
int main (){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =1;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<=arr[j+1]){
                continue;
            }
            else if(arr[j]>arr[j+1]){
                count = 0;
            }
        }
    }
    if(count == 0){
        printf("Not Sorted");
    }
    else if( count ==1){
        printf("Sorted");
    }

    return 0;
}