//check if the given tree is BST or not
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

void inOrder(Node* root, vector<int>& ans){
    if(root == NULL) return;
    inOrder(root->left, ans);
    ans.push_back(root->val);
    inOrder(root->right, ans);
}

bool validateBST(Node* root){
    vector<int> ans;
    inOrder(root, ans);
    
    // Check if the vector is sorted in ascending order
    for(int i=0; i<ans.size(); i++){
        if(ans[i] > ans[i+1]) return false;
    }
    return true;
}

int main(){
    // Create a binary search tree
    //      10
    //    /    \
    //   5      15
    //  / \    /  \
    // 2  8   12   18
    //    /    \
    //   6      13

    //create root node
    Node* root = new Node(10);

    //create left subtree
    root->left = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    root->left->right->left = new Node(6);

    //create right subtree
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    root->right->left->right = new Node(13);

    Node* p = root->right->left;
    Node* q = root->right->right;
    
    cout<<"Is the given tree a BST?"<<(validateBST(root)? "Yes" : "No")<<endl;
}