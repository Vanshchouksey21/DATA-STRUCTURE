    // #include<iostream>
    // #include<list>
    // #include<algorithm>
    // #include<bits/stdc++.h> 

using namespace std ;
int main(){
    list<int>l1;
    l1.push_front(18);
    l1.push_front(5);
    l1.push_front(11);
    l1.push_front(4);
    l1.push_front(18);
    l1.push_front(45);
    l1.push_front(6);

for( auto p:l1){
    cout<<p<<" ";
}
l1.pop_back();
cout<<endl;
cout<<"after deletion:\n";
for( auto p:l1){
    cout<<p<<" ";
}
cout<<endl;
l1.pop_front();
cout<<"after deletion:\n";
for( auto p:l1){
    cout<<p<<" ";
}
cout<<endl;

// for manipulating the data at particular position we use advance f(n) ....


// deleting ht value 
auto it = l1.begin();
advance(it,2);
l1.erase(it); 
cout<<"after deletion:\n";
for( auto p:l1){
    cout<<p<<" ";
}
cout<<endl;

// insert the value 
auto it1 = l1.begin();
advance(it1 , 3);
l1.insert(it1 , 89);
cout<<"after insertion:\n";
for( auto p:l1){
    cout<<p<<" ";
}
cout<<endl;


// update the value
auto it3=l1.begin();
advance(it3 ,1);
*it3 =5005;
cout<<"after overighting:\n";
for( auto p:l1){
    cout<<p<<" ";
}
cout<<endl;


// // for search 
// auto t = find(l1.begin() , l1.end() ,6);
// if(t!=l1.end()){
//     cout<<"found = "<<*t;
// }
// else{
//     cout<<"not found";
// }


  
























// spa base fire base 