#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count =1;
        for(int j=0;j<n-1;j++){
            if(arr[j]<=arr[j+1]){
                continue;
            }
            else if(arr[j]>arr[j+1]){
                count = 0;
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