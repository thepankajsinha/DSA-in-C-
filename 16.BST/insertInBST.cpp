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

void insertInBST(Node* root, int val){
    //if root is null, create a new node and make it root
    if(root == NULL) root = new Node(val);

    if(root->val > val){  //if value is less than root's value, insert in LST
        if(root->left == NULL) root->left = new Node(val);  //if LST is empty
        else insertInBST(root->left, val);   //if LST is not empty
    }
    else{ //if value is greater than root's value, insert in RST
        if(root->right == NULL) root->right = new Node(val);  //if RST is empty
        else insertInBST(root->right, val);  //if RST is not empty
    }
}

// Function to print inorder traversal of BST
void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
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

    // Insert 7 and 14 into the BST
    insertInBST(root, 7);
    insertInBST(root, 14);
    
    inOrder(root);  //2 5 6 7 8 10 12 13 14 15 18        
    
}