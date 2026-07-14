class Solution {
  public:
    vector<int> deleteElement(vector<int>& arr, int k) {
        // Code Here
        vector<int> res;
        stack<int> stk;
        
        for(int i=0; i<arr.size(); i++){
            while(!stk.empty() && k>0 && stk.top() < arr[i]){
                stk.pop();
                k--;
            }
            stk.push(arr[i]);
        }
        
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
 

