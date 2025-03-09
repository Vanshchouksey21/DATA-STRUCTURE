#include<iostream>
#include<stack>
using namespace std ;

bool isvalid (string s){
    stack<char>stk;
    bool r = true ;
    for(int i = 0 ; i <s.size() ; ++i){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            stk.push(s[i]);
        }
        else if(s[i]=='}'){
            if(!stk.empty() && stk.top()=='{'){
                stk.pop();
            }
            else{
                r=false;
                break;
            }
            
        }
        else if(s[i]==']'){
            if(!stk.empty() && stk.top()=='['){
                stk.pop();
            }
            else{
                r=false;
                break;
            }       
    }
    else if(s[i]==')'){
        if(!stk.empty() && stk.top()=='('){
            stk.pop();
        }
        else{
            r=false;
            break;
        }
    }
}
if(r && stk.empty()){
    return true ;
}
else{
    return false ;
}
}
int main(){
    string s ;
    cout<<"Enter a string :";
    cin>>s;
     
    if(isvalid(s)){
        cout<<"valid";
    }
    else{
        cout<<"Invalid";
    }
}