#include<iostream>
#include<vector>

using namespace std ; 
int main (){

  //runtime insetion
    vector<int>v;
    int n , b ;
    cout<<"how many values do you want insert :";
    cin>>n ;
    for(int i = 0 ; i < n ; ++i ){
        cout<<"enter the value of "<<i+1<<"index"<<endl;
        cin>>b;
        v.push_back(b);

    }
    for(auto p : v){
        cout<<p<<" ";
    }
}