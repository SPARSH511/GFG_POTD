//Perfect Numbers


int isPerfectNumber(long long n) {
    if(n == 1 || n == 0) return 0;
    long long sum = 1;
    for(int i=2;i<=sqrt(n);i++){
        if(sum > n) return 0; 
        if(n%i == 0){
            if(n/i != i){
                sum+=n/i;
                sum+=i;
            }
            else sum+=i;
        }
    }
    return sum == n;
}
