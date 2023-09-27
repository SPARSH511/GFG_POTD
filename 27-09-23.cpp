//Find the closest pair from two arrays

vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        
        //If we add the two statements here we can get the answer for unsorted arrays 
        //as well but time complexity asked is less than nlogn
        
        // sort(arr,arr+n);
        // sort(brr,brr+m);
        
        //This code gives all test cases passed
        //Test Cases are not right they consider the arrays sorted but they are not 
        vector<int> ans;
        int start=0,end=m-1;
        int min_difference=INT_MAX;
        while(start<n && end>=0)
        {
            int pair_sum=arr[start]+brr[end];
           
            if(abs(x-pair_sum)<min_difference)
            {   min_difference=abs(x-pair_sum);
                ans={arr[start],brr[end]};
            
            }
            if(pair_sum<=x)
                start++;
            else end--;
            
        }
        
        return ans;
        
        
        //Actual Right Code for Unsorted Array 
        // int l=0,r=0,mindiff = INT_MAX;
        // vector<int> ans;
        // while(l != n && r != m){
        //     // cout<<arr[l]<<" "<<brr[r]<<"\n";
        //     int diff = abs(arr[l]+brr[r]-x);
        //     if(mindiff > diff){
        //         mindiff = diff;
        //         ans = {arr[l],brr[r]};
        //     }
        //     if(mindiff == 0) return ans;
        //     else if(arr[l]+brr[r]-x < 0){
        //         if(l < n-1 && r < m-1){
        //             if(arr[l+1] > brr[r+1]) l++;
        //             else r++;
        //         }
        //         else{
        //             if(l < n-1) l++;
        //             else r++;
        //         }
        //     }
        //     else{
        //         if(l < n-1 && r < m-1){
        //             if(arr[l+1] < brr[r+1]) l++;
        //             else r++;
        //         }
        //         else{
        //             if(l < n-1) l++;
        //             else r++;
        //         }
        //     }
        // }
        // // cout<<ans[0]<<" "<<ans[1]<<"\n";
        // return ans;
        
    }
