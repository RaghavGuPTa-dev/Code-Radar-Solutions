// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int ans=0;
        int k=arr[i];
        int rem;
        while(k!=0){
            rem=k%10;
            ans=ans*10+rem;
            k=k/10;
        }
        if(arr[i]==ans){
            count++;
        }
    }
    
    printf("%d",count);
}