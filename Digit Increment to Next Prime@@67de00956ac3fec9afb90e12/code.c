int prime(int n){
    if(n>7){
        return 2;
    }
    else if(n==0){
        return 2;
    }
    else{
    while(n!=9){
        n++;
        if(n>7){
            return 2;
        }
        else if (n==2 || n==3 || n==5 || n==7){
            return n;
        }
    }
    }
}
int incrementToPrimeDigits(int n){
    int rem,ans=0;
    int x=n;
    if(n==0){
        return 2;
    }
    while(n!=0){
        rem=n%10;
        ans=ans*10+prime(rem);
        n=n/10;
    }
    int ans1;
    while(ans!=0){
        rem=ans%10;
        ans1=ans1*10+rem;
        ans=ans/10;
    }
    return ans1;
}