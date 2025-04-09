// Your code here...
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    if(count!=0){
        int arr1[n-count];
        for(int i=0;i<n;i++){
            int x=0;
            if(arr[i]!=0){
            arr1[x]=arr[i];
            x++;
            }
        }
        for(int i=0;i<n;i++){
            int y=1;
            if(arr[i]==0){
                arr[n-y]=arr[i];
                y++;
            }
        }
        for(int i=0;i<=count;i++){
            arr[i]=arr1[i];
        }
    
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    }
    else{
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }

    return 0;
}