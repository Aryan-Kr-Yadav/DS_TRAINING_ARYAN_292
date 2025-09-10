#include<iostream>
using namespace std;

int main(){
    int n,a[100];
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=0,end=n-1;
    int found=0;
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==target){
            cout<<"element found at index : "<<mid<<endl;
            found=1;
            break;
        }
        else if(a[mid]<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        }
        if(!found){
            cout<<"not found";
        }

}