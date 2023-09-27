// Find duplicates in the array

vector<int> duplicates(int arr[], int n) {
    // code here
    vector<int> v(n,0);
    for(int i=0;i<n;i++) v[arr[i]]++;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(v[i] > 1) ans.push_back(i);
    }
    if(ans.size() == 0) return {-1};
    return ans;
}
