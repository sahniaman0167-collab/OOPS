#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node* head;
    Node* tail;
    public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
            return ;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = NULL;
            return ;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if(head == NULL)
        {
            cout << "ll is empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
         temp->next = NULL;
         delete temp;
    }

    void pop_back()
    {
        if(head == NULL)
        {
            cout<<"ll is empty!"<<endl;
            return;
        }
        else
        {
            Node* temp = head;
            while(temp->next!= tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }

    void insert(int val,int pos)
    {
        if(pos < 0)
        {
            cout << "invalid position!"<<endl;
            return ;
        }
        if(pos == 0)
        {
            push_front(val);
            return ;
        }
        Node* temp = head;
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);

    ll.push_back(40);

    ll.pop_front();

    ll.insert(4,1);

    cout<<"Linked List is:-"<<endl;
    ll.printLL();

    // ll.pop_back();
    // ll.printLL();
    return 0;
}