#include<bits/stdc++.h>
using namespace std;
int top=-1;
void push(int arry[],int stack_size,int x)
{

    if(top==(stack_size-1))
    {
        cout<<"Overflow."<<endl;
    }
    else
    {
        top++;
        cout<<"Enter the digit of customer number "<<top <<endl;
        cin>>x;

        arry[top]=x;
    }
}
void pop(int arry[],int stack_size)
{

    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        cout<<arry[top]<<" number is removed."<<endl;
        top--;
    }
}
void Top(int arry[],int stack_size)
{
    if(top==-1)
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"your top number is: "<<arry[top]<<endl;
    }
}
void display(int arry[],int stack_size)
{
    if(top==-1)
    {
        cout<<"Queue is empty."<<endl;
    }
    else
    {
        cout<<"Your all Queue numbers are here:"<<endl;
        for(int i=0; i<=top; i++)
        {
            cout<<arry[i]<<endl;
        }
    }
}

int main()
{
    int stack_size;
    int x;//stack elements.
    cout<<"Enter your queue size: ";
    cin>>stack_size;
    int arry[stack_size];
    for(int i=0;; i++)
    {
        char symbol;
        cout<<endl<<"Enter your choice: ";
        cin>>symbol;
        if(symbol=='a')
        {
           push(arry,stack_size,x);
        }
        else if(symbol=='b')
        {
            pop(arry,stack_size);
        }
        else if(symbol=='c')
        {
            Top(arry,stack_size);
        }
        else if(symbol=='d')
        {
            display(arry,stack_size);
        }
        else if(symbol=='e')
        {
            break;
        }
    }
}

