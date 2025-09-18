class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>result(n,-1);
        stack<int>s;
        for(int i=2*n-1;i>0;i--)
        {
        while(!s.empty() && s.top()<=arr[i%n]){
            s.pop();
        }
        if(!s.empty()){
            result[i%n]=s.top();
        }
        s.push(arr[i%n]);
        }
        return result;
        
    }
};