//Power of Two 

bool isPowerofTwo(long long n){
    // Your code here    
    long long k = 0,n1 = n;
    while(n > 1) {n/=2; k++;}
    if((long long)pow(2,k) == n1) return true;
    return false;
}
