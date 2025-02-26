
int isPrime(int num){
    int count=0;
    if(num>=2){
    for(int j=2;j<=num-1;j++){
        if(num%j==0){
            return 0;
            count++;
            break;
        }
    }
    if(count==0){
        return 1;
    }
    }
    else if(num<2){
        return 1;
    }
}
