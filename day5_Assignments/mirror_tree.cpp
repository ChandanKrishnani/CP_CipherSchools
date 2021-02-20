#include<iostream> 
using namespace std; 
struct Node  
{ 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 
  struct Node* newNode(int data) 
{ 
    struct Node* node = (struct Node*) 
    malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    return(node); 
} 
  
void mirrorTree(struct Node* node)  
{ 
    if (node == NULL)  
        return;  
    else
    { 
        struct Node* temp; 
          
       mirrorTree(node->left); 
        mirrorTree(node->right); 
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    } 
}  
  
void inOrder(struct Node* node)  
{ 
    if (node == NULL)  
        return; 
      
    inOrder(node->left); 
    cout << node->data << " "; 
    inOrder(node->right); 
}  
  
  
int main() 
{ 
    struct Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5);  
      
    cout << "Inorder traversal of tree is" << endl; 
    inOrder(root);       
    mirrorTree(root);  
      
    cout << "\nInorder traversal of the mirror tree is \n";  
    inOrder(root); 
    return 0;  
} 
