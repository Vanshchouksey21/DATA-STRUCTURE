#include <iostream>
#include <vector>
#include<algorithm>
using namespace std ; 

int main() {
    vector<int> vec;  
    vec.push_back(1);      
    vec.push_back(5);
    vec.push_back(55);
    vec.push_back(11);
    vec.push_back(22);
    vec.push_back(44);
    for(auto p : vec ){
        cout<<p<<" ";

    }
    vec.pop_back();
    cout<<endl ;
    vector<int>::iterator it = vec.begin();
    vec.insert(it , 32);
    cout<<endl ;
    for(auto p:vec){
        cout<<p<<" ";

    }
    vec.pop_back();
    cout<<endl;
    for (auto p:vec){
        cout<<p<<" ";
    }
    vec.erase(it+2);
    cout<<endl;
    for(auto p:vec){
        cout<<p<< " ";

    }
    int x ; 
    cout<<"Enter the values for Searching :";
    cin>>x;
    auto j  = find(vec.begin() , vec.end() , x);
  if(x==*j){

    cout<<"Value is found ";

  }
  else{
    cout<<"value is not found ";
  }
//   vec.erase(j);

cout<<endl ; 
cout<<"reverse is :"<<endl;
reverse(vec.begin() ,vec.end() );
for(auto p:vec){
    cout<<p<<" ";
}



cout<<endl;
cout<<"min value "<<*min_element(vec.begin(), vec.end());
cout<<"max value "<<*max_element(vec.begin(), vec.end());


cout<<endl;

if(vec.empty()){
    cout<<"vectoe is empty !!!!!";

}
else{
    cout<<"data is :"<<endl;
    for(auto p:vec){
cout<<p<<" ";
    }
}
cout <<endl ;

vec.clear();
if(vec.empty()){
    cout<<"vector is empty !!!!!";

}
else{
    cout<<"data is :"<<endl;
    for(auto p:vec){
cout<<p<<" ";
    }
}



}
