#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct detl
{

    int prio;
    int info;
    struct detl *link;

}node;
node *head;
void push()
{
    node *ptr,*loc;
    ptr=(node*)malloc(sizeof(node));
    cout<<"Enter the Information ";
    cin>>ptr->info;
    cout<<"Enter the priority";
    cin>>ptr->prio;
    loc=head;
    if(head==NULL)
    {
        head=ptr;
        ptr->link=NULL;

    }
    else
    {
        if(ptr->prio<=head->prio)
        {
          ptr->link=head;
          head=ptr;
        }
        else
        {
            while(loc->prio>=ptr->prio)
            {
                loc=loc->link;
            }
            ptr->link=loc->link;
            loc->link=ptr;

        }
    }

}
void pop()
{
    node *ptr;
    char n;
    ptr=head;
    cout<<"Are you sure you want to pop (y/n)";
    cin>>n;
    if(n=='y')
    {
       if(head==NULL)
       {
           cout<<"It is not possible ";

       }
       else
       {
           head=ptr->link;
           free(ptr);
       }


    }
}
void disp()
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {

        cout<<"Here is the information "<<ptr->info<<endl;
        cout<<"Her is the priority"<<ptr->prio<<endl;
        ptr=ptr->link;

    }
}

int main()
{
    int n;
    while(1)
    {
        cout<<"1.Push "<<endl;
        cout<<"2.pop "<<endl;
        cout<<"3. TO display "<<endl;
        cout<<"4 . to exit"<<endl;
        cin>>n;
        switch(n)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();

                break;
            }
        case 3:
            {

                disp();
                break;
            }
        case 4:
            {

                return 0;

            }
        }

    }
    return 0;

}
