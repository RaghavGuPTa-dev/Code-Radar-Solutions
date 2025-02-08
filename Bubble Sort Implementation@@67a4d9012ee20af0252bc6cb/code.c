#include <stdio.h>
int bubblesort(int n, int arr){
    int smallest = 0;
    int ssmallest =arr[0];
    int arr1[n];
    for(i=0;i<n;i++){
        if(smallest>=ssmallest){
            arr1[i]==smallest;
            smallest==ssmallest;
            if(i!=n){
            ssmallest==arr[i+1];
            }
        }
        else if(smallest<ssmallest){
            smallest==ssmallest;
            
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",arr[i]);
    }
    return 0;
    return 0;
}