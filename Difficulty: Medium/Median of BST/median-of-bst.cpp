/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void inorder_traversal(Node * root, vector<int>&inorder){
      if(root==NULL)return;
      inorder_traversal(root->left,inorder);
      inorder.push_back(root->data);
      inorder_traversal(root->right,inorder);
      
  }
    int findMedian(Node* root) {
        vector<int>inorder;
        inorder_traversal(root,inorder);
        // for(int i=0;i<inorder.size();i++){
        //     cout<<inorder[i];
        // }
       if(inorder.size()%2!=0) return inorder[inorder.size()/2];
       return inorder[(inorder.size()/2)-1];
    }
};