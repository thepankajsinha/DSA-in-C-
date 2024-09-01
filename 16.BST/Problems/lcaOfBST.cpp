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

int LCA(Node* root, Node* p, Node*  q){
    if(root->val < p->val && root->val < q->val) return LCA(root->right, p, q);
    else if(root->val > p->val && root->val > q->val) return LCA(root->left, p, q);
    else return root->val;
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
    
    cout<<LCA(root,p,q)<<endl; //15
}