#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arry[],int low,int high)
{
    int i=low-1;//-1
    int pivot=arry[high];
    //cout<<pivot<<endl;
    for(int j=low; j<high; j++)
    {

        if(arry[j]<=pivot)
        {
            i++;
            swap(&arry[i],&arry[j]);
        }
    }
    swap(&arry[i+1],&arry[high]);
    return i+1;
}
void quicksort(int arry[],int low,int high)
{
    if(low<high)
    {
        int k=partition(arry,low,high);
        quicksort(arry,low,k-1);
        quicksort(arry,k+1,high);
    }

}

int main()
{
    int arry[]= {4,9,1,2,7,3};
    int n=sizeof(arry)/sizeof(arry[0]);
    quicksort(arry,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arry[i]<<"  ";
    }
    cout<<endl;

}
