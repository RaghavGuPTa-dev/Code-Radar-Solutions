// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int largest,smallest;
    for(int j=0;j<=n-1;j++){
        for(int k=0;k<n-1-j;k++){
            if(arr[k]>arr[k+1]){
                largest = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = largest;
            }
        }
        }
        printf("%d\n",arr[n-1]);
        printf("%d",arr[0]);
    
    return 0;
}