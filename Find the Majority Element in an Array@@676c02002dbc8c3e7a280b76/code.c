// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                int temp=arr[j];
                count++;
            }
        }
        if(count>n/2){
            printf("%d",temp);
        }
    }
    return 0;

}