#include<iostream>
using namespace std;
int main(){
    int n = 15 ;  
    int n1 = n+n-1;
    int a = 0;
	for(int i = 1 ; i <= n1 ; i++){

        (i<=n) ? a++ : a--;

        for(int j = 1 ; j <= n1 ; ++j){

            if(j>=n+1-a && j <= a+n-1){

            cout<<"*";
            }
            else{

            cout<<" ";

            }
        }
        cout<<endl;
		}
    }