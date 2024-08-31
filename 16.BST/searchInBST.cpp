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

//Best case- T.C- O(logn) when tree is balanced
//Worst case- T.C- O(n)
//Average case- T.C- O(n)
bool searchInBST(Node* root, int target){
    if(root == NULL) return false;
    if(root->val == target) return true;
    if(root->val > target) return searchInBST(root->left, target);
    else return searchInBST(root->right, target);
}
int main(){
    // Create a binary tree
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

    cout<<(searchInBST(root, 10) ? "Found" : "Not found"); //Found
    
}