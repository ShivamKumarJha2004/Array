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
int main()
{
    int arr[] = {10, 20, 30, 40};
    node *head = arrtoLL(arr);
    display(head);
}