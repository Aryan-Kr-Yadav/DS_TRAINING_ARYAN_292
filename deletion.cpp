#include<iostream>
using namespace std;
  
int main()
{
    int a[100],n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be deleted: ";
    int x;
    cin>>x;
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"Element not found"<<endl;
    }
    else{
            for(int i=pos;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
            n--;
            cout<<"Array after deletion"<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" "<<endl;
            }
    }

} 