#include<stdio.h>
int Prime(int arr[],int n){
    int count=0;
    int temp=1;
    for(int i=0;i<n;i++){
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                temp=0;
            }
        }
        if(temp==1){
            count++;
        }
    }
    return count;
}
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",Prime(arr,n));
    return 0;
}