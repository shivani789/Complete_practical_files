#include<iostream>
using namespace std;
void arrayreverse(int input[],int size,int k)
{
    int *arr=new int[k];
    for(int i=0;i<k;i++)
    {
        arr[i]=input[i];
    }
    int j=0;
    for(j=0;j<size-k;j++)
    {
        input[j]=input[j+k];
    }
    int m=0;
    while(j<size)
    {
        input[j]=arr[m];
        j++;
        m++;
    }
    for(int i=0;i<size;i++)
        cout<<input[i]<<" ";
    delete []arr;
}
int main()
{
    int k,size;
    cin>>size;
   int a[size];
    for(int i=0;i<size;i++)
        cin>>a[i];
    cin>>k;
    arrayreverse(a,size,k);
    return 0;
}
