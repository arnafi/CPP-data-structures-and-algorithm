#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arry[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if (arry[j]>arry[j+1]){
            int swap=arry[j];
            arry[j]=arry[j+1];
            arry[j+1]=swap;
            }
        }
    }
}
void arrayPrint(int arry[],int n){
    for(int i=0;i<n;i++){
        cout<< arry[i]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++)
        {
            cin>>arry[i];
        }
    bubblesort(arry,n);
    arrayPrint(arry,n);


}
