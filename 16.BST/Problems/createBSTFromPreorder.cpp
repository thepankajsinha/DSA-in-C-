//Create a BST from the give preorder traversal
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
    if(root == NULL) root = new Node(val); //empty tree-> create root node
    if(root->val > val){ 
        if(root->left == NULL) root->left = new Node(val);  //if LST is empty
        else insertInBST(root->left, val);   //if LST is not empty
    }
    else if(root->val < val) {
        if(root->right == NULL) root->right = new Node(val);  //if RST is empty
        else insertInBST(root->right, val);  //if RST is not empty
    }
    else return;
}

Node* createBSTFromPreorder(vector<int>& preorder){
    Node* root = new Node(preorder[0]);
    for(int i = 1; i < preorder.size(); i++){
        insertInBST(root, preorder[i]);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main(){
    vector<int> preorder = {40, 30, 35, 20, 80, 100};
    Node* root = createBSTFromPreorder(preorder);
    inOrder(root); //20 30 35 40 80 100
    return 0;
}