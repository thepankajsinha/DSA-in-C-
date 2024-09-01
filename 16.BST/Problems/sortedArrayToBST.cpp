//Create a balanced BST using sorted array
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

Node* sortedArrayToBST(vector<int>& arr, int start, int end){
    if(start > end) return NULL;
    int mid = (start + end) / 2;
    Node* root = new Node(arr[mid]); //Create the root node with the middle element
    root->left = sortedArrayToBST(arr, start, mid - 1); //build left subtree
    root->right = sortedArrayToBST(arr, mid + 1, end); //build right subtree
    return root;
}

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int start = 0;
    int end = arr.size() - 1;
    Node* root = sortedArrayToBST(arr, start, end);
    inOrder(root); //1 2 3 4 5 6 7 8
    return 0;
}