#include<bits/stdc++.h>
using namespace std;

int partition(int arry[],int l,int h)
{
    int i=l-1;
    int j=h;
    int pivot=arry[h];
    for(int j=l;j<h;j++)
    {
        if(arry[j]<=pivot)
        {
        i++;
        swap(arry[i],arry[j]);
        }
    }
    swap(arry[i+1],arry[h]);
    return i+1;
}
void quicksort(int arry[],int l,int h)
{
    if(l<h)
    {
        int k=partition(arry,l,h);
        quicksort(arry,l,k-1);
        quicksort(arry,k+1,h);
    }
}

int binary_searching(int arry[],int left,int right,int x)
{
    int mid;
    if(right>=left)
    {
        mid=left+(right-left)/2;

    if(arry[mid]==x)
    {
        return mid;
    }
    else if(arry[mid]>x)
    {
        return binary_searching(arry,left,mid-1,x);
    }
    else
    {
        return binary_searching(arry,mid+1,right,x);
    }
    }
    return -1;
}

int main()
{
    int arry[]={3,5,2,4,6,7,8,43,24,67,22};//your data must be sorted for binary search. I used quick sort for sorting.
    int n=sizeof(arry)/sizeof(arry[0]);
    int x;//searching digit
    cout<<"Enter your digit for search: ";
    cin>>x;
    quicksort(arry,0,n-1);
    int result=binary_searching(arry,0,n-1,x);
    if(result==-1)
    {
        cout<<"Your result not found.";
    }
    else
    {
        cout<<"Your result found."<<endl<<"your result position is: "<<result;
    }
    return 0;
}
