#include <iostream>
#include <map>  // Include the correct header file for multimap
using namespace std;

int main() {
    multimap<int, string> multi;
    
    
    multi.insert({1, "Vansh"});
    multi.insert({2, "harshal"});
    multi.insert({1, "nikhil"});  
    
    
    for (auto &entry : multi) {
        cout << entry.first << " " << entry.second << endl;
    }
    
    auto it = multi.find(1);

    //for single value delete  

    if(it!=multi.end()){
        multi.erase(it);
    }
    else{
        cout<<"not found";
    }

// whole occurance of given no : 

    if(it!=multi.end()){
        multi.erase(1);
    }
    else{
        cout<<"not found";
    }


    for (auto &entry : multi) {
        cout << entry.first << " " << entry.second << endl;
    }
}
