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
        int ans=0;
        int rem;
        while(i!=0){
            rem=i%10;
            ans=ans*10+rem;
            i=i/10;
        }
        printf("%d ",ans);
    }
    return 0;
}