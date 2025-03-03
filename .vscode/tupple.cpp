

#include<iostream>
#include<vector>
#include<tuple>
using namespace std ;; 
int main (){
    // tuple<int , string , int >t{101 , "vansh " ,21 };
    // t = make_tuple(102 ," nikhil " , 22);
    // cout<<"roll no :"<<get<0>(t)<<"\n";
    // cout<<"name  :"<<get<1>(t)<<"\n";
    // cout<<" age   :"<<get<2>(t)<<"\n";

    vector<tuple<int , string , int >>v ;
    int rollno ,n , age ;
    string name ;
    cout<<"how many records u m=wanna store \n";
    cin>>n;
    for (int i =1 ; i<=n ; ++i){
        cout<<"enter roll no \n";
        cin>>rollno ;
        cout<<"enter name \n";
        cin>>name;
        cout<<"enter age ";
        cin>>age;

        v.push_back(make_tuple(rollno ,name , age));
        cout<<"\n stored data are \n";
        

    }
}