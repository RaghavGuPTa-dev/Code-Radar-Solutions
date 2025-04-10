// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count =0 , temp=0;
    for(int i=0;i<n;i++){
        int rem = arr[i]%10;
        rem = (rem*10) + temp;
        temp = arr[i]/10;
        if(temp == arr[i]){
        count++;
    }
    }
    
    printf("%d",count);
}