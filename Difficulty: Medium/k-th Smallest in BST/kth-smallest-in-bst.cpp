/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/


class Solution {
    void smallest(Node * root , int& mins, int& k){
        if(root==NULL) return;
        smallest(root->left,mins,k);
        --k;
        if(k==0){
            mins=root->data;
            return;
        }
        smallest(root->right,mins,k);
        
    }
  public:
    int kthSmallest(Node *root, int k) {
        int min=-1;
       smallest(root,min,k);
       return min;
        
    }
};