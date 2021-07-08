#include<bits/stdc++.h>
using namespace std;

int push(int arry[],int stack_size,int x,int top)
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
        return top;

    }
}
int pop(int arry[],int top,int stack_size)
{

    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {

        cout<<arry[top]<<" number is removed."<<endl;
        top--;
        return top ;
    }
}
void Top(int arry[],int top,int stack_size)
{
    if(top==-1)
    {
        cout<<"Stack is empty."<<endl;
        cout<<arry[top];
    }
    else
    {
        cout<<"your top number is: "<<arry[top]<<endl;
    }
}
void display(int arry[],int top,int stack_size)
{
    if(top==-1)
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        cout<<"Your all numbers are here:"<<endl;
        for(int i=0; i<=top; i++)
        {
            cout<<arry[i]<<endl;
        }
    }
}

int main()
{
    int stack_size,top=-1;
    int x;//stack elements.
    cout<<"Enter your stack size: ";
    cin>>stack_size;
    int arry[stack_size];
    for(int i=0;; i++)
    {
        char symbol;
        cout<<endl<<"Enter your choice: ";
        cin>>symbol;
        if(symbol=='a')
        {
           top= push(arry,stack_size,x,top);
        }
        else if(symbol=='b')
        {
            top = pop(arry,top,stack_size);
        }
        else if(symbol=='c')
        {
            Top(arry,top,stack_size);
        }
        else if(symbol=='d')
        {
            display(arry,top,stack_size);
        }
        else if(symbol=='e')
        {
            break;
        }
    }
}
