
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
// Lamda function --- when we need to treat the function as a parameter lemda fn is used !!!!!!
int main (){
// lemada function [](int a ){return a =10;}(3);


//     cout<<[](int a){
//         return a+10;
//     }(5);
//     cout<<endl;



//     cout<<[](int a , int b ){return a>b ;}(20,3);
// cout<<endl ;


    // auto k =[](int a ){return a*a ; };
    // cout<<k(6);

    vector<int>v={4,2,3,5,1};

    // inbuild for desending 
    // sort(v.begin() , v.end() , greater<int>());


// lemba function use 
    sort(v.begin() , v.end() , [](int a, int b ){return a>b;});
    cout<<" sorted Vectors are :";
    for(auto p :v){
        cout<<p<<" ";
    }


   
}