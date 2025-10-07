/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int k=q.size();
            for(int i=0;i<k;i++){
                auto l=q.front();
                q.pop();
                m[l.second]=l.first->data;
                if(l.first->left) q.push({l.first->left,l.second-1});
                if(l.first->right) q.push({l.first->right,l.second+1});
            }
            
        }
        vector<int>result;
        for(auto i : m){
            result.push_back(i.second);
        }
        return result;
        
    }
};