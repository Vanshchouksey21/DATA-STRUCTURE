#include<iostream>
#include<map>
using namespace std ;
int main (){
    map<int , string>mp ;
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


    int roll  ;
    cout<<"ENter roll no for search :";
    cin>>roll;
    auto k = mp.find(roll);
    if(k!=mp.end()){
        cout<<k->first<<" "<<k->second ;
    }
    else{
        cout<<"not found" ;
    }

    int roll1  ;
    cout<<"ENter roll no for delete :";
    cin>>roll1;
    auto k2 = mp.find(roll1);
    if(k2!=mp.end()){
       mp.erase(k2);
    }
    else{
        cout<<"not found" ;
        
        cout<<"not found" ;
    }
    cout<<"map all after deletion "<<endl;Z
    for(auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}