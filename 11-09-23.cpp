//Lucky Numbers

bool isLucky(int n) {
    // if(n%2==0) return false;
    // int len=n;
    // int skip=2;
    // while(skip<=len)
    // {
    //     if(n%skip==0)return false;
    //     n=n-n/skip;
    //     skip++;
    //     len=n;
    // }
    
    // return true;
    
    // slower but easy to understand
    vector<int> trk(n+1,1);
    int counter = 2, prev = -1, rem = n;
    while(prev != rem){
        prev = rem;
        int k = 1, count = 0;
        for(int i=1;i<=n;i++){
            if(trk[i] == 0) continue;
            if(k == counter) {
                k = 1; 
                trk[i] = 0; 
                if(i == n) return false; 
                count++;
            }
            else k++;
        }
        rem = prev-count;
        counter++;
    }
    return true;
}
