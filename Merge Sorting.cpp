#include<bits/stdc++.h>
using namespace std;

void merge(int arry[],int left,int middle,int right)
{
    int n1=middle-left+1;
    int n2=right-middle;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arry[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=arry[middle+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arry[k]=L[i];
            i++;
            k++;
        }
        else
        {
            arry[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arry[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arry[k]=R[j];
        j++;
        k++;
    }
}
void sorting(int arry[],int left,int right)
{
    if(left<right)
    {
    int middle=left+(right-left)/2;
    sorting(arry,left,middle);
    sorting(arry,middle+1,right);
    merge(arry,left,middle,right);
    }
}
int main()
{
 int arry[]={9,1,4,6,2,5,3};
 int n=sizeof(arry)/sizeof(arry[0]);
 sorting(arry,0,n-1);
 for(int i=0;i<n;i++){
        cout<<arry[i]<<" ";
    }
 return 0;
}
