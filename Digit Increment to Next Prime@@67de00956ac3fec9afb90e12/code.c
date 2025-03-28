int prime(int n){
    if(n>7){
        return 2;
    }
    else{
    while(n!=2||n!=3||n!=4||n!=7){
        n++;
        if(n>7){
            return 2;
        }
    }
    return n;
    }
}
int incrementToPrimeDigits(int n){
    int rem,ans=0;
    int x=n;
    while(n!=0){
        rem=n%10;
        ans=ans*10+prime(rem);
        n=n/10;
    }
    return ans;
}