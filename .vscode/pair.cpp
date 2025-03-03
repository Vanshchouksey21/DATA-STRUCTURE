// pair is predefine stucture template , it only stores two values and at the first the value is excess by first keyword and the second value is access by second keyword we can use (make_pair()) to instert the record in a pair ......... 
#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    pair<int , string> p{101,"joy"};
    p = make_pair(102 , "honey");
    // cout<<p.first<<p.second;
    vector<pair<int , string>>ans;
    int n ;
    cout<<"enter the size of vector" ;
    cin>>n;
    for(int i =1; i<=n ; ++i){
        int rollno ; 
        string name ;
        cout<<"Enter you roll no :";
        cin>>rollno;
        cout<<"eNTER NAME "<<endl ;
        cin>>name;
        ans.push_back({rollno , name });

    }
    for(auto p:ans){
        cout<<p.first<<" "<<p.second<<endl;
    }
}

