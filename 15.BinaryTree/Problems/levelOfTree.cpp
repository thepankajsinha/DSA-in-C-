//find the number of levels in the tree
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Node{
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

int levelOfTree(Node* root){
    if(root == NULL) return 0;

    int level = 1 + max(levelOfTree(root->left), levelOfTree(root->right));
    return level;
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

   //creating 8 nodes of binary tree
    Node* root = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);

    //Linking each node
    root->left = b;
    root->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left = g;
    e->right = h;

    
   cout<<levelOfTree(root);

}