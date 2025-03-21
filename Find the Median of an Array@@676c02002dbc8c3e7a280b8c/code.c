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
        for(int j=0;j<n-1-k;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=temp;
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(n%2==0){
        printf("%d",arr[(n+1)/2]); 
    }
    else{
        printf("%d",((arr[(n-2)/2])+(arr[(n)/2]))/2);
    }

    return 0;
}