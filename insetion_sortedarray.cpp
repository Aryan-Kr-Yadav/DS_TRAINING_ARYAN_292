#include<iostream>
using namespace std;

int main()
{
    int a[100], i, n, num;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"Enter the no which is to be inserted in the array"<<endl;
    cin>>num;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>num)
        {
            a[i+1]=a[i];
        }
        else
        {
            a[i+1]=num;
            break;
        }
    }
    for(i=0;i<=n;i++){
        cout<<a[i]<<endl;
    }

}