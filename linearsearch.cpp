#include<iostream>
using namespace std;

int main()
{
    int n,a[100],el;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched : "<<endl;
    cin>>el;
    for(int i=0;i<n;i++)
    {
        if(a[i]==el){
            cout<<"Element found at  index :"<<i<<endl;
            break;
        }
    }
}