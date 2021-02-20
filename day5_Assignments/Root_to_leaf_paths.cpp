#include <iostream> 
using namespace std; 
class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
};  
void printPathsRecur(node* node, int path[], int pathLen);  
void printArray(int ints[], int len);  
  
void printPaths(node* node)  
{  
    int path[1000];  
    printPathsRecur(node, path, 0);  
}  
  
void printPathsRecur(node* node, int path[], int pathLen)  
{  
    if (node == NULL)  
        return;  
      
    path[pathLen] = node->data;  
    pathLen++;  
      
    if (node->left == NULL && node->right == NULL)  
    {  
        printArray(path, pathLen);  
    }  
    else
    {  
        printPathsRecur(node->left, path, pathLen);  
        printPathsRecur(node->right, path, pathLen);  
    }  
}  
  
  
void printArray(int ints[], int len)  
{  
    int i;  
    for (i = 0; i < len; i++)  
    {  
        cout << ints[i] << " ";  
    }  
    cout<<endl;  
}  
  
node* newnode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
      
    return(Node);  
}  
  
int main()  
{  
      
    node *root = newnode(1);  
    root->left = newnode(2);  
    root->right = newnode(3);  
    root->left->left = newnode(4);  
    root->left->right = newnode(5);  
    root->right->left = newnode(6);     
    printPaths(root);  
    return 0;  
}  
