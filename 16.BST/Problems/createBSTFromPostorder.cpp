//Create a BST from the give postorder traversal
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

Node* createBSTFromPostorder(vector<int>& postorder){
    int n = postorder.size();
    Node* root = new Node(postorder[0]);
    for(int i =n-1; i > 0; i--){
        insertInBST(root, postorder[i]);
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
    vector<int> postorder = {8, 20, 12, 25, 40, 30, 22};
    Node* root = createBSTFromPostorder(postorder);
    inOrder(root); //8 12 20 22 25 30 40
    return 0;
}