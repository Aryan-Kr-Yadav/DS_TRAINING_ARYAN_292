#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;
    cout<<"Size of the vector l :"<<v.size()<<endl;
    cout<<"capacity of vector l :"<<v.capacity()<<endl;

    v.push_back(0);
    cout<<"Size of the vector l :"<<v.size()<<endl;
    cout<<"capacity of vector l :"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size of the vector l :"<<v.size()<<endl;
    cout<<"capacity of vector l :"<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Size of the vector l :"<<v.size()<<endl;
    cout<<"capacity of vector l :"<<v.capacity()<<endl;

    v.push_back(8);
    cout<<"Size of the vector l :"<<v.size()<<endl;
    cout<<"capacity of vector l :"<<v.capacity()<<endl;

    v.push_back(9);
    cout<<"Size of the vector l :"<<v.size()<<endl;
    cout<<"capacity of vector l :"<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
        cout<<endl;
    for(auto value:v)
        cout<<value<<" ";
        cout<<endl;

    v.pop_back();
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;
    cout<<"Front :"<<v.front()<<" "<<"Last Value: "<<v.back()<<endl;

    v.insert(v.begin(),2);
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    v.insert(v.begin()+2,10);
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    cout<<"Size of vector l:"<<v.size()<<endl;
    cout<<"Capacity of vector l:"<<v.capacity()<<endl;

    v.insert(v.begin()+4,3,11);
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    v.erase(v.begin(),v.begin()+3);
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    vector<int>v1={2,5,7,8,9,10};
    for(auto value:v1)
    cout<<value<<" ";
    cout<<endl;

    vector<int>v2(3,5);
    for(auto value:v2)
    cout<<value<<" ";
    cout<<endl;

    vector<int>::iterator it;
        for(auto it=v1.begin();it!=v1.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    vector<int>::iterator reverse_it;
    for(auto reverse_it=v1.end()-1;reverse_it!=v1.begin()-1;reverse_it--){
        cout<<*reverse_it<<" ";
    }
    return 0;
}
