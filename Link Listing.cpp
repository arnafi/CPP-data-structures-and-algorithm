#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void display(struct node *one)//This fuction shows all the numbers of link list.
{
    while(one!=NULL)
    {
        cout<<one->data<<"  "<<endl;
        one=one->next;

    }
}
void push(struct node **head)//This function take input numbers in link list from first.
{
    int n;
    cout<<"Enter the value for push in link list: "<<endl;
    cin>>n;
    node *temp=NULL;
    temp= new node;

    temp->data=n;
    temp->next=*head;
    *head=temp;
}
void append(struct node **head)//This function take input numbers in link list from last.
{
    int m;
    cout<<"Enter your value for append in list: "<<endl;
    cin>>m;
    node *temp3=NULL;
    temp3=new node;
    node *temp1=*head;
    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;

    }
    temp3->data=m;
    temp3->next=NULL;
    temp1->next=temp3;


}
void pop_first(node **head)//This funtion remove numbers from first in link list.
{
    *head = (*head)->next;
}
void pop_last(node **head)//This funtion remove numbers from last in link list.
{
    node *temp2 = (*head);
    while(temp2->next->next!=NULL)
    {
        temp2 = temp2->next;

    }
    temp2->next = NULL;
}
void searching(node **head,int n,int found)//This fuction helps to search numbers of link list.
{
    cout<<"Enter your data for search:  ";
    cin>>n;
    while((*head)!=NULL)
    {
        if((*head)->data==n)
        {
            cout<<"Found"<<endl;
            found++;
            break;
        }

        *head=(*head)->next;
    }
    if(found==0)
    {
        cout<<"Not Found"<<endl;
    }
}

int main()
{
    char symbol;
    int n;
    int found=0;

    node *one=NULL;
    node *two=NULL;
    node *three=NULL;

    one= new node;
    two= new node;
    three= new node;

    one->data=4;
    one->next=two;

    two->data=8;
    two->next=three;

    three->data=7;
    three->next=NULL;
    cout<<"Enter p to push your value in link list."<<endl;
    cout<<"Enter a to append your value in link list."<<endl;
    cout<<"Enter v to view your link list."<<endl;
    cout<<"Enter d to delete numbers of link list from first."<<endl;
    cout<<"Enter z to delete numbers of link list from first."<<endl;
    cout<<"Enter s to search numbers of link list ."<<endl<<endl;
    for(int i=0;; i++)
    {
        cout<<"Enter your choice: "<<endl;
        cin>>symbol;
        if(symbol=='p')
        {
            push(&one);
        }
        else if(symbol=='a')
        {
            append(&one);
        }
        else if(symbol=='v')
        {
            display(one);
        }
        else if(symbol=='d')
        {
            pop_first(&one);
        }
        else if(symbol=='z')
        {
            pop_last(&one);
        }
        else if(symbol=='s')
        {
            searching(&one,n,found);
        }
        else
        {
            cout<<"Valid Input"<<endl;;
        }
    }
}
