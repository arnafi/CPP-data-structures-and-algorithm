#include<bits/stdc++.h>
using namespace std;
int l=-1;
int r=-1;
void EnQueue(int arry[],int queue_size,int x)
{

    if(r==(queue_size-1))
    {
        cout<<"Overflow."<<endl;
    }
    else if(l==-1 && r==-1)
    {
        l=r=0;
        cout<<"Enter the digit of customer number " <<endl;
        cin>>x;

        arry[r]=x;
    }
    else
    {
        cout<<"Enter the digit of customer number " <<endl;
        cin>>x;
        r++;
        arry[r]=x;
    }
}
void DeQueue(int arry[],int queue_size)
{

    if(l==-1 && r==-1)
    {
        cout<<"underflow"<<endl;
    }
    else if(l==r)
    {

        cout<<arry[r]<<" number is removed."<<endl;
        l=r=-1;
    }
    else
    {
      cout<<arry[l]<<" number is removed."<<endl;
      l++;
    }
}
void Top(int arry[],int queue_size)
{
    if(r==-1 && l==-1)
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"your top number is: "<<arry[l]<<endl;
    }
}
void display(int arry[],int queue_size)
{
    if(r==-1 && l==-1)
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"Your all Queue numbers are here:"<<endl;
        for(int i=l; i<=r; i++)
        {
            cout<<arry[i]<<endl;
        }
    }
}

int main()
{
    int queue_size;
    int x;//queue elements.
    cout<<"Enter your queue size: ";
    cin>>queue_size;
    int arry[queue_size];
    for(int i=0;; i++)
    {
        char symbol;
        cout<<endl<<"Enter your choice: ";
        cin>>symbol;
        if(symbol=='a')
        {
           EnQueue(arry,queue_size,x);
        }
        else if(symbol=='b')
        {
            DeQueue(arry,queue_size);
        }
        else if(symbol=='c')
        {
            Top(arry,queue_size);
        }
        else if(symbol=='d')
        {
            display(arry,queue_size);
        }
        else if(symbol=='e')
        {
            break;
        }
    }
}

