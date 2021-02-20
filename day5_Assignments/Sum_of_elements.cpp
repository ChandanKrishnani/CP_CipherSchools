#include <iostream> 
using namespace std; 
  
struct Node { 
    int key; 
    Node* left, *right; 
}; 
  
Node* newNode(int key) 
{ 
    Node* node = new Node; 
    node->key = key; 
    node->left = node->right = NULL; 
    return (node); 
} 
int sumOfElements(Node* root) 
{ 
    if (root == NULL) 
        return 0; 
    return (root->key + sumOfElements(root->left) + sumOfElements(root->right)); 
} 
int main() 
{ 
    Node* root = newNode(5); 
    root->left = newNode(6); 
    root->right = newNode(7); 
    root->left->left = newNode(8); 
    root->left->right = newNode(9); 
    root->right->left = newNode(10); 
    root->right->right = newNode(11); 
    root->right->left->right = newNode(12); 
  
    int a = sumOfElements(root); 
    cout << "Sum of the elements is :  " << a << endl; 
  
    return 0; 
} 
