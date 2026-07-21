class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxSum=arr[0];
        int curSum=0;
        for(int i =0; i<arr.size();i++){
            curSum+= arr[i];
            maxSum=max(curSum,maxSum);
            if(curSum<0){
                curSum=0;
            }
        }
        return maxSum;
    }
};