//Best Case (Balanced BST) / Average - Search, Insertion, and Deletion: O(log n)
//Worst Case (Unbalanced BST)- Search, Insertion, and Deletion: O(n)
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

bool searchInBST(Node* root, int target){
    if(root == NULL) return false;  //empty tree
    if(root->val == target) return true; //single node
    if(root->val > target) return searchInBST(root->left, target); //multiple nodes
    else return searchInBST(root->right, target);
}


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


Node* deleteInBST(Node* root, int key){

    if(root->val == key){
        //case 1: no child
        if(root->left == NULL && root->right == NULL) return NULL;

        //case 2: one child
        if(root->left == NULL || root->right == NULL){
            if(root->left != NULL) return root->left;
            else return root->right;
        }

        //case 3: two children
        if(root->left != NULL && root->right != NULL){
            Node* successor = root->right;
            while(successor->left!= NULL){
                successor = successor->left;
            }
            root->val = successor->val;
            root->right = deleteInBST(root->right, successor->val);
        }
    }
    else if(root->val > key){ //go left
        root->left = deleteInBST(root->left, key);
    }
    else{ //go right
        root->right = deleteInBST(root->right, key);
    }

}


void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
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

    //insert element into BST
    insertInBST(root, 9);
    insertInBST(root, 20);
    inOrder(root); //2 5 6 8 9 10 12 13 15 18 20
    cout<<endl;
    
    //delete element from BST
    deleteInBST(root, 9);
    inOrder(root);  //2 5 6 8 10 12 13 15 18 20
    cout<<endl;

    deleteInBST(root, 20);
    inOrder(root);  //2 5 6 8 10 12 13 15 18
    cout<<endl;

    deleteInBST(root, 10);
    inOrder(root);  //2 5 6 8 12 13 15 18
    cout<<endl;

    //search an element
    cout<<"Search 12: "<<(searchInBST(root, 12)? "Found" : "Not Found")<<endl; //Found
    
}