/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    static bool cmp(const pair<int,int>x, const pair<int,int>y){
    if(x.first!=y.first) return x.first<y.first;
    return x.second<y.second;
}
    
    void inorder(Node * root, int target , vector<pair<int,int>>&r){
        if(!root)return;
        inorder(root->left,target,r);
        r.push_back({abs(target-root->data),root->data});
        inorder(root->right,target,r);
    }
  public:
    vector<int> getKClosest(Node* root, int target, int k) {
      vector<pair<int,int>>r;
      inorder(root,target,r);
      sort(r.begin(),r.end(),cmp);
      vector<int>result;
      for(int i=0;i<k;i++){
          result.push_back(r[i].second);
      }
        return result;
    }
};