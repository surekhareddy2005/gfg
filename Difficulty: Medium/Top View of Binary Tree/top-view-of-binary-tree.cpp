/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                auto k=q.front();
                q.pop();
                if(m.find(k.second)==m.end()){
                    m[k.second]=k.first->data;
                }
                if(k.first->left) q.push({k.first->left,k.second-1});
                if(k.first->right) q.push({k.first->right,k.second+1});
            }
        }
        vector<int>result;
        for(auto i : m){
            result.push_back(i.second);
        }
        return result;
    }
};