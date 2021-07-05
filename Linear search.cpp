#include<bits/stdc++.h>
using namespace std;

void linear_search(int arry[],int n,int found,int s)
{
    for(int i=0; i<n; i++)
    {
        if(arry[i]==s)
        {
            cout<<"Found your value."<<endl<<"Position number: " <<i;
            found++;
            break;
        }

    }
    if(found==0)
    {
        cout<<"Not Found!!";
    }
}

int main()
{
    int arry[]= {1,4,5,2,3,10,48,54,8,7};
    int n=sizeof(arry)/sizeof(arry[0]);
    int found=0;
    int s;//searching element which is inputed by user
    cout<<"Enter your value for search: ";
    cin>>s;
    linear_search(arry,n,found,s);
    return 0;

}
