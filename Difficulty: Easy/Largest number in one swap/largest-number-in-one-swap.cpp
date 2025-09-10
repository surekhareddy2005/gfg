class Solution {
  public:
    string largestSwap(string &s) {
        // code here
      int l=-1;
      int r=-l;
      char maxs='0';
      int maxindex=-1;
      for(int i=s.size()-1;i>=0;i--){
          if(s[i]>maxs){
              maxs=s[i];
              maxindex=i;
          }
          else if(s[i]<maxs){
              l=i;
              r=maxindex;
          }
      }
        
        if(l==-1)return s;
        swap(s[l],s[r]);
        return s;
        
    }
};