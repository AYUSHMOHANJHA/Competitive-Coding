//https://practice.geeksforgeeks.org/contest-problem/increment-and-move5239/0/

#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
};
void insert_(Node** head,int val)
{
    Node* new_node = new Node();
    Node* last = *head;
    new_node->data = val;
    new_node->next = NULL;
    new_node->prev = NULL;
    if(*head==NULL){
        *head=new_node;
        return;
    }
    while (last->next!=NULL)
        last=last->next;

    last->next=new_node;
    new_node->prev=last;
    
    return;

}
void printList(Node* node)  
{  
    Node* last;   
    while (node)  
    {  
        cout<<node->data<<" ";  
        last = node;  
        node = node->next;  
    }    
}  

int main()
{

    int N;
    cin>>N;
    Node* head =NULL;
      Node* head_new=NULL;
    while(N--)
    {
        int v;
        cin>>v;
        insert_(&head,v);
    }
    printList(head);
    Node* node=head;
     Node* last=node->next->next;  
    while (last)  
    {
        if((node->data==node->next->data)&&(node->next->next->data==100))
        {
            node->data=100;
            int d=node->next->data ;
            int r=floor(d*(0.1));
            r = d + r;
            //cout<<"d="<<d<<"r="<<r<<endl;
            node->next->data=r;
            //cout<<"fdf-"<<node->next->data<<endl;
        }
      node=node->next;
      last=node->next->next; 
    } 
     cout<<endl;
    int c=0;  
    Node* t1=head;
    Node* new_list=head_new;
    Node *t=head;
    while(t)
    {
        if(t->data!=100)
            insert_(&head_new,t->data);
        else
                  c=c+1;
       
        t=t->next;
    }
    for(int i=0;i<(c);i++)
    {
        insert_(&head_new,100);
    }
    printList(head_new);
    return 0;
}