#include<iostream>
#include<unordered_map>
using namespace std ;
int main (){
unordered_map<int , string>mp ;
    int n ;
    cout<<"How many records do you want to enter :" ;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        int roll ; 
        string name ;
        cout<<"Enter roll no :"<<endl;
        cin>>roll;
        cout<<"Enter your name :"<<endl;
        cin>>name;
        mp.insert({roll , name });
    }
    cout<<"map all valuie "<<endl;
    for(auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}

