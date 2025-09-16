class Solution {
  public:
   int div(int a , int b){
       int q=a/b;
       int r=a%b;
       if(r!=0 && ((a<0)^(b<0)) ){
           q-=1;
       }
       return q;
   }
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int>temp;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]=="+" || arr[i]=="-" || arr[i]=="*" || arr[i]=="/" || arr[i]=="^"){
                int b =temp.top();
                temp.pop();
                int a=temp.top();
                temp.pop();
                if(arr[i]=="+"){
                    temp.push(a+b);
                    // cout<<a+b<<" ";
                }
                else if(arr[i]=="-"){
                    temp.push(a-b);
                    // cout<<a-b<<" ";
                }
               else if(arr[i]=="*"){
                    temp.push(a*b);
                    // cout<<a*b<<" ";
                }
               else if(arr[i]=="/"){
                 int r=div(a,b);
                 temp.push(r);
                }
               else{
                    temp.push(pow(a,b));
                    // cout<<pow(a,b)<<"";
                }
            }
            else{
                temp.push(stoi(arr[i]));
            }
        }
        int res=temp.top();
        temp.pop();
        return res;
    }
};