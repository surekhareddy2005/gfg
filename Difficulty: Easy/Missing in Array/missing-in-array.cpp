class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        vector<int>a(arr.size()+2,0);
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        for(int i=1;i<=a.size();i++){
            if(a[i]!=1)return i;
        }
    }
};