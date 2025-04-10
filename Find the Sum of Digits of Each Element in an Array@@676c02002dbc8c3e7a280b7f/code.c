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
        int k=arr[i];
        int ans=0;
        int rem;
        while(k!=0){
            rem=k%10;
            ans=ans+rem;
            k=k/10;
        }
        printf("%d ",ans);
    }
    return 0;
}