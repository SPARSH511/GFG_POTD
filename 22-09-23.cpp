//First and last occurrences of x

vector<int> binary(int low,int high,int arr[],int x){
  while(low <= high){
      int mid = low+(high-low)/2;
      if(arr[mid] == x){
          int m = mid;
          while(arr[m] == x) m--;
          while(arr[mid] == x) mid++;
          return {m+1,mid-1};
      }
      else if(arr[mid] > x) high = mid-1;
      else low = mid+1;
  }
  return {-1,-1};
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    return binary(0,n-1,arr,x);
}
