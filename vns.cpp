#include<iostream>
#include<array>
#include<algorithm>
using namespace std ; 
int main (){
    array <int , 5> arr{1,8,69,4,4};
    sort(arr.begin(),arr.end());

   int size =arr.size();

   if(arr[size-1] != arr[size-2]){

    cout<<"second Highest is :" ;
    cout<<arr[size-2];
   }
   else{
    cout<<"second Highest is :" ;
    cout<<arr[size-3];
   }
}

