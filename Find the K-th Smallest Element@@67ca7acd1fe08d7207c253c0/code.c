// Your code here..
int kthSmallest(int arr,int n,int k){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
            }
        }
    }
    return arr[k-1];
    }