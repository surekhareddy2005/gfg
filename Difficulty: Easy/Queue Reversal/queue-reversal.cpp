class Solution {
  public:
  void function(queue<int>&ques,int t){
      if(ques.empty()) return;
      ques.pop();
      function(ques,ques.front());
      ques.push(t);
      
  }
    void reverseQueue(queue<int> &q) {
        function(q,q.front());
        
    }
};