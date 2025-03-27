// Your code here...
int mountainPeak(int n){
    int rem,temp;
    while(n!=0){
        rem=n%10;
        temp=rem;
        if(temp>rem){
            return temp;
            break;
        }
        n=n/10;

    }
}