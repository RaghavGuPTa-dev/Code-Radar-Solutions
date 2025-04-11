// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]==-2){
        printf("%d",-2);
    }
    else{
    int largest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
    }
    printf("%d",largest);}
    return 0;
}