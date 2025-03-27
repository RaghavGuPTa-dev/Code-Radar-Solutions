// Your code here...
int mountainPeak(int n){
    int count;
    int x=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    int arr[count];
    int rem;
    for(int i=0;i<count;i++){
        rem=x%10;
        arr[i]=rem;
        x=x/10;
    }
    for(int k=0;k<count-1;k++){
        for(int j=0;j<count-k-1;i++){
            if(arr[j]>arr[j+1]){
                return arr[j];
            }
            else if (arr[j]==arr[j+1]){
                return -1;
            }
        }
    }
}