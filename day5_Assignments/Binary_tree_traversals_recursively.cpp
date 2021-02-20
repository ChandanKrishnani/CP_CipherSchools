#include <iostream> 
using namespace std; 
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
  
void printPostorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 

    printPostorder(node->left); 
   
    printPostorder(node->right); 
    cout << node->data << " "; 
} 
  
void printInorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    printInorder(node->left); 
  
    cout << node->data << " "; 
    printInorder(node->right); 
} 
void printPreorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first print data of node */
    cout << node->data << " "; 
  
    /* then recur on left sutree */
    printPreorder(node->left);  
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}  
  
/* Driver program to test above functions*/
int main() 
{ #include <iostream> 
using namespace std; 
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
  
void Postorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 

    Postorder(node->left); 
    Postorder(node->right); 
    cout << node->data; 
} 
  
void Inorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    Inorder(node->left); 
    cout << node->data; 
    Inorder(node->right); 
} 
void Preorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    cout << node->data; 
    Preorder(node->left);    
    Preorder(node->right); 
}  

  
int main() 
{ 
    struct Node *root = new Node(1); 
    root->left          = new Node(2); 
    root->right        = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    cout << "\nPreorder traversal in binary tree : "; 
    Preorder(root); 
  
    cout << "\nInorder traversal in binary tree :"; 
    Inorder(root);  
  
    cout << "\nPostorder traversal in binary tree :"; 
    Postorder(root); 
  
    return 0; 
} 
    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    cout << "\nPreorder traversal of binary tree is \n"; 
    printPreorder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    printInorder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostorder(root); 
  
    return 0; 
} 
