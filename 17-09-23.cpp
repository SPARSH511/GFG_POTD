//First N Fibonacci Numbers

vector<long long> printFibb(int n) {
  //code here
  if(n == 1) return {1};
  if(n == 2) return {1,1};
  long long a=1,b=1,c;
  vector<long long> ans;
  ans.push_back(1); ans.push_back(1);
  for(int i=3;i<=n;i++){
      c = a+b;
      ans.push_back(c);
      a = b;
      b = c;
  }
  return ans;
}
