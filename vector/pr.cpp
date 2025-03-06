#include<iostream>
#include<vector>
#include<algorithm>


using namespace std ;
int main(){


    vector<int>vec;
    int n , b ; 
    cout << "enter the size of a vector";
    cin >>n ;
    cout<<"Enter the values :";
    for(int i = 0 ; i < n ; ++i ){
        cin>>b;
        vec.push_back(b);

    }
    cout<<"Entered values are :"  ;
    for(auto p :vec){
        cout<<p<<" ";

    }
     vector<int>::iterator vansh = vec.begin();
     vec.insert(vansh+1 , 4);
     for(auto p :vec){
        cout<<p<<" ";

    }




}