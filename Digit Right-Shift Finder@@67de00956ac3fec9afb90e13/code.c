// Your code here...
int digit(int count){
    int n=1;
    for(int i=1;i<=count;i++){
        n=n*n;
    }
    return n;
}
int digitRightShift(int n){
    int rem;
    int x=n;
    int ans=0;
    rem=n%10;
    n=n/10;
    x=n;
    int count=0;
    while(n!=0){
        count++;
    }
    ans= rem*digit(count)+x;
    return ans;
}