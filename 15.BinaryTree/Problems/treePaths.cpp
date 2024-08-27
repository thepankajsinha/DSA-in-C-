//Tree path -> Invert Tree means return the path from root to leaf

#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int val){ 
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void treePaths(Node *root, string s, vector<string> &path){
   
   if(root == NULL) return;
   string a = to_string(root->val);

   if(root->left == NULL && root->right == NULL){
       s = s + a;
       path.push_back(s);
       return;
   }

   treePaths(root->left, s+a+"->", path);
   treePaths(root->right, s+a+"->", path);
}
int main(){

    //create first tree
    Node* root = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);

    root->left = a;
    root->right = b;

    string s ="";
    vector<string> path;
    treePaths(root, s, path);

    for (int i = 0; i < path.size(); i++){
        cout<<path[i]<<" | ";
    }
    cout<<endl;

}