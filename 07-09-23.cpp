//Minimum Multiplications to Reach End


int minimumMultiplications(vector<int>& arr, int start, int end) {
  // code here
  if(start == end) return 0;
  
  queue<pair<int,int>> q;
  q.push({start,0});
  
  vector<int> vis(1e5+1,0);
  vis[start] = 1;
  
  int mod = 1e5;
  
  while(!q.empty()){
      int curr = q.front().first,step = q.front().second;
      if(curr == end) return step;
      q.pop();
      for(auto x: arr){
          int val = (curr*x)%mod;
          if(!vis[val]){
              q.push({val,step+1});
              vis[val] = 1;
          }
      }
  }
  
  return -1;
}
