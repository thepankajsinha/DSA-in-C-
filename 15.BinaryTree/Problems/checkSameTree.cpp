//Same Tree -> Two Tree is said to be the same if they have same structure and the nodes have same values

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
bool isSameTree(Node *p, Node *q){
    //condition for empty subtree
    if(p == NULL && q == NULL) return true;


    if(p==NULL || q == NULL) return false;

    //check if value of current nodes are same
    if(p->val != q->val) return false;

    //check left subtree
    bool leftAns = isSameTree(p->left, q->left);
    if(leftAns==false) return false;

    //check right subtree
    bool rightAns = isSameTree(p->right, q->right);
    if(rightAns==false) return false;

    //return true if all above condition are true
    return true;
 
}
int main(){

    //create first tree
    Node* root1 = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);

    root1->left = a;
    root1->right = b;

    //create second tree
    Node* root2 = new Node(1);
    Node* c = new Node(2);
    Node* d = new Node(3);
    
    root2->left = c;
    root2->right = d;

    cout<<isSameTree(root1, root2);

}