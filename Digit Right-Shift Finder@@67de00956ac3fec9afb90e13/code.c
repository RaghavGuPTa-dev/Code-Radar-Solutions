// Your code here...
int digit(int count){
    int n=1;
    for(int i=1;i<=count;i++){
        n=n*10;
    }
    return n;
}
int digitRightShift(int n){
    int rem;
    int ans=0;
    rem=n%10;
    n=n/10;
    int x=n;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    ans= rem*digit(count)+x;
    return ans;
}