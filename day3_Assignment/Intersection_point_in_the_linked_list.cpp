#include <iostream> 
using namespace std; 
  

class Node 
{ 
    public:
        int data; 
        Node* link; 
}; 
  
 
int getIntersectionNode(Node* head1, Node* head2) 
{ 
    Node *ptr1 = head1, *ptr2 = head2; 
  
    
    while (ptr1 != ptr2) 
    { 
  
        if (ptr1 == NULL) 
            ptr1 = head2; 
         
        else  
            ptr1 = ptr1->link; 
         
  
        if (ptr2 == NULL) 
            ptr2 = head1; 
         
        else  
            ptr2 = ptr2->link; 
        
    } 
  
    
    return ptr1->data; 
} 
  
 
int main() 
{
  
    Node* newNode; 
    Node* head1 = new Node(); 
    head1->data = 10; 
    Node* head2 = new Node(); 
    head2->data = 3; 
    newNode = new Node(); 
    newNode->data = 6; 
    head2->link = newNode; 
    newNode = new Node(); 
    newNode->data = 9; 
    head2->link->link = newNode; 
    newNode = new Node(); 
    newNode->data = 15; 
    head1->link = newNode; 
    head2->link->link->link = newNode; 
    newNode = new Node(); 
    newNode->data = 30; 
    head1->link->link = newNode; 
    head1->link->link->link = NULL; 
  
     
    cout << getIntersectionNode(head1, head2); 
  
    return 0; 
} 
    {
        size++;
        ptr = ptr->nxt;
    }
    return size;
}

Node *findIntersectionHelper(Node *larger, Node *smaller, int difference)
{
    Node *ptr = larger, *qtr = smaller;
    for (int i = 0; i < difference; i++)
    {
        if (ptr == NULL)
            return NULL;
        ptr = ptr->nxt;
    }
    while (ptr != NULL && qtr != NULL)
    {
        if (ptr == qtr)
        {
            return ptr;
        }
        ptr = ptr->nxt;
        qtr = qtr->nxt;
    }
    return NULL;
}
Node *findIntersection(Node *a, Node *b)
{
    if (a == NULL || b == NULL)
    {
        return NULL;
    }
    int countA = getSize(a);
    int countB = getSize(b);
    int d = countA - countB;
    if (d >= 0)
    {
        return findIntersectionHelper(a, b, d);
    }
    else
    {
        return findIntersectionHelper(b, a, -1 * d);
    }
}

int main()
{
}
© 2021 GitHub, Inc.
