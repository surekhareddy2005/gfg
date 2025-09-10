/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    int depth(Node * head){
        if(head==NULL) 
        return 0;
      int left=  depth(head->left);
      int right = depth(head->right);
    return 1+max(left,right);
    }
    int maxDepth(Node *root) {
        int k=depth(root);
        return k;
        
    }
};
