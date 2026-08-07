class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
       int n = arr.size();
       long long  x = n+1;
        int ans;
        long long expectedSum= (x*(x+1))/2;
        long long currSum=0;
        for(int i =0; i<n ;i++){
            currSum+=arr[i];
        }
        ans = expectedSum-currSum;
         return ans;
    }
   
};