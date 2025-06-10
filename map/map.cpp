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


    // map<int , string>student {{101 , "amit" } , {102 , "vansh"} , {21 , "vaibhav"}};



// display type - 1
    // for( auto p :student){
    //     cout<<p.first<<p.second<<"\n";
    // }


//  dispaly type - 2 
    // for(auto p = student.begin() ; p != student.end() ;p++ ) //P=p+1 use nhi kr sakte , because it is not contigeous memory allocation !!!!!!
    // {
    //     cout<<p->first<<" "<<p->second <<"\n";
    // }





    map <int , string> abc ;
    abc.insert({109 , "vansh"});
    abc.insert({101 , "sumit"});
    abc.insert({107 , "amit"});
    abc.insert({107 , "amit"});
    abc.insert({107 , "amit"});
    abc.insert({106 , "ans"});
  
    cout << "Student Map (Sorted by Key):\n";
    for ( auto p : abc) {
        cout << "Roll No: " << p.first << ", Name: " << p.second << "\n";
    }
    

}