// Your code here...
int fibonacciSeries(int n){
    int a=0;
    int b=1;
    int c;
    for(int i =1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        b=c;
        a=b;
    }
}