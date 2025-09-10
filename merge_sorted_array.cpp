#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of first vector"<<endl;
    cin>>n1;
    vector<int> v1(n1);
    cout<<"Enter the elements of first vector"<<endl;
    for(int i=0;i<n1;i++){
        cin>>v1[i];
    }
    cout<<"Enter the size of second vector"<<endl;
    cin>>n2;
    vector<int> v2(n2);
    cout<<"Enter the elements of second vector"<<endl;
    for(int i=0;i<n2;i++){
        cin>>v2[i];
    }
    vector<int> merged(n1+n2);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),merged.begin());
    cout<<"Merged sorted vector is: "<<endl;
    for(int k=0;k<n1+n2;k++){
        cout<<merged[k]<<" ";
    }   
    return 0;
}
