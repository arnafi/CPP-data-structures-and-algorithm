#include<bits/stdc++.h>
using namespace std;


void seletionsort(int arry[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_idx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arry[min_idx]>arry[j])
            {
                min_idx = j;
            }
        }
        swap(arry[min_idx],arry[i]);
    }
}
void swap(int a,int b,int arry[],int n)
{
    seletionsort(arry,n);

    int temp = a;
    a=b;
    b=temp;

}

void arrayPrint(int arry[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arry[i]);
    }
}

int main()
{
    int arry[]= {5,2,7,-3,1,9},a,b;
    int n = sizeof(arry)/sizeof(arry[0]);
    seletionsort(arry,n);
    swap(a,b,arry,n);
    arrayPrint(arry,n);



}

