//Equilibrium Point 

int equilibriumPoint(long long arr[], int n) {
  // Your code here
  if(n == 1) return 1;
  long long sum = 0,test = arr[0];
  for(int i=0;i<n;i++) sum+=arr[i];
  for(int i=1;i<n;i++){ 
      if(test == sum-test-arr[i]) return i+1;
      test+=arr[i];
  }
  return -1;
}
