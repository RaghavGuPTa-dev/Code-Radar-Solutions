// Your code here...
int fac(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int factorialRange(int a, int b){
    for(int i=a;i<=b;i++){
        printf("%d",fac(i));
    }
}