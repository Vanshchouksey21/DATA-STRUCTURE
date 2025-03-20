// it is an associate container 
// it contains key and value 
// it is sorted by default 
// key is always unique 
// self balance  BST or red black tree maintain lexicography order 
// there are mainly three typres of map :
//   # ordered map  ( sorted ) (RED BLACK TREE)
//  # unordered map ( unsorted ) (HASING TECHNIQUE )
//  # multimap  (dulicate values all allowed )
//  # map allocates discontigeous memory

#include<iostream>
#include<map>
using namespace std ; 
int main (){
    map<int , string>student {{101 , "amit" } , {102 , "vansh"} , {21 , "vaibhav"}};
    // for( auto p :student){
    //     cout<<p.first<<p.second<<"\n";
    // }
    for(auto p = student.begin() ; p != student.end() ;p++ ){
        cout<<p->first<<" "<<p->second <<"\n";
    }

}