// Your code here...
int fac(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int factorialRange(int a, int b){
    if(a>b){
        printf("Invalid range");
    }
    if(a<0){
       printf("Invalid range"); 
    }
    for(int i=a;i<=b;i++){
        printf("%d\n",fac(i));
    }
}