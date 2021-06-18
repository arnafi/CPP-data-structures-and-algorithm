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
        printf("%d ",arry[i]);
    }
}

int main()
{
    int arry[]={5,2,7,-3,1,9};
    int n = sizeof(arry)/sizeof(arry[0]);
    bubblesort(arry,n);
    arrayPrint(arry,n);


}
