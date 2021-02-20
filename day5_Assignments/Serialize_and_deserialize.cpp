#include <bits/stdc++.h>
using namespace std; 
struct node{ 
    int next; 
    struct node* left, *right; 
}; 
  
node* newNode(int next){ 
    node* temp = new node; 
    temp->next = next; 
    temp->left = temp->right = NULL; 
    return (temp); 
} 
void serialize(node *root, FILE *f){
    if(root == NULL){ 
        fprintf(f, "%d ", -1); 
        return; 
    } 
  
    fprintf(f, "%d ", root->next); 
    serialize(root->left, f); 
    serialize(root->right, f); 
} 
  
void deserialize(node *&root, FILE *f){ 
    int val; 
    if(!fscanf(f, "%d ", &val) || val == -1)
       return; 
    root = newNode(val); 
    deserialize(root->left, f); 
    deserialize(root->right, f); 
} 
  
void inorder(node *root){ 
    if(root){ 
        inorder(root->left); 
        cout<<root->next<<" "; 
        inorder(root->right); 
    } 
}
int main(){ 
    struct node *root   = newNode(14); 
    root->left  = newNode(7); 
    root->right = newNode(21); 
  
    FILE *f = fopen("tree.txt", "w"); 
    if(f == NULL){ 
        cout<<"Could not open file"; 
        return 0; 
    } 
    serialize(root, f); 
    fclose(f); 
  
    node *root1 = NULL; 
    f = fopen("tree.txt", "r"); 
    deserialize(root1, f); 
    inorder(root1); 
  
    return 0; 
}
