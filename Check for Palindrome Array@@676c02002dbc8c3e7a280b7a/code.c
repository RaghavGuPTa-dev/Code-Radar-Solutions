// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
   
    for(int i=0;i<n-1;i++){
       
        arr[i]=arr[n-i-1];
    }
    if(arr[n]==arr1[n]){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}