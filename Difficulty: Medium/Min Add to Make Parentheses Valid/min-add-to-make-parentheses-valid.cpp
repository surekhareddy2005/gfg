class Solution {
  public:
    int minParentheses(string& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i]==')' && st.top()=='('){
                 st.pop();
             }
             else{
                 st.push(s[i]);
             }
        }
        int count=0;
        while(!st.empty()){
            // cout<<st.top()<<" ";
            count++;
            st.pop();
        }
        return count;
        
        
    }
};