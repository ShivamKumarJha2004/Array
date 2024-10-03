#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data1)
    {
        data = data1;
        next = NULL;
    }
};
node *arrtoLL(int arr[])
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < 4; i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *deleteHead(node *head)
{
    node *temp = head;
    if (head == NULL)
        return NULL;

    head = head->next;
    free(temp);
    return head;
}
node *deleteTail(node *head)
{ node *temp=head;
    if(head==NULL ||head->next==NULL)
    return NULL;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}
node *deletekelement(node *head,int pos)
{
    int counter=0;
    node *temp=head;
    node *prev=NULL;
    if(head==NULL)
    {
        return head;
    }
    if(pos==1)
    {
        node *temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    while(temp!=NULL)
    {
        
        counter++;
        if(counter==pos)
        {
            prev->next=prev->next->next;
           free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    node *head = arrtoLL(arr);
    // head = deleteTail(head);
    head=deletekelement(head,3);
    display(head);
    return 0;
}
