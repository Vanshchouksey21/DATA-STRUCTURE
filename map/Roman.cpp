#include<iostream>
#include<unordered_map>
using namespace std ; 
int rt( string s){
unordered_map<char , int> up {{'I' , 1}, {'V' , 5} , {'X' , 10}, {'L' , 50}, {'C' , 100} , {'D' ,500} , {'M' ,1000}};
int r = 0 ;
for(int i = 0 ; i < s.size() ; ++i){
if(up[s[i]] < up[s[i+1]]){
    r-=up[s[i]];

}
else{
    r+=up[s[i]];
}

}
return r ;



}
int main(){
    string s = "IX";
    cout <<rt(s);
}