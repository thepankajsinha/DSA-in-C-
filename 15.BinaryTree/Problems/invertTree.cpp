//Invert Tree -> Invert Tree means swap each leftsubtree to the rightsubtree

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


Node* invertTree(Node *root){
   //condition for empty tree
   if(root == NULL) return NULL;

   //swap left and right subtrees
   Node* temp = root->left;
   root->left = root->right;
   root->right = temp;

   invertTree(root->left);
   invertTree(root->right);
    
   return root;
}
int main(){

    //create first tree
    Node* root = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);

    root->left = a;
    root->right = b;

    Node* ans = invertTree(root);
    cout<<ans;

}