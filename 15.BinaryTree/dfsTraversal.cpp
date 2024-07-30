#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Node *root){
    if(root == NULL) return;

    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root){
    if(root == NULL) return;

    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

void postOrder(Node *root){
    if(root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

int main()
{
    // Create a binary tree
    //     1
    //    / \
    //   2   3
    //  / \   \
    // 4   5   6
    //    / \
    //   7   8

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);

    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
}