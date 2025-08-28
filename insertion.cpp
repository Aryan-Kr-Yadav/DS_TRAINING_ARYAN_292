#include<iostream>
using namespace std;

int main(){
    int n,a[100],pos,el,i;
    cout<<"enter the size of the array "<<endl;

    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for( i =0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position and element to be inserted";
    cin>>pos>>el;
    for(i = n; i >= pos; i--) {
        a[i] = a[i-1];
    }
    a[pos-1] = el;
    n++;
    
    //after the insertion
    for( i=0;i<n;i++)
    {
    cout<<a[i]<<" ";}

}

