#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{

    array<int, 5> a{34, 34, 34, 6, 5};
    array<int, 5> b{};
    bool isEmpty = true;
    for (int i = 0; i < b.size(); i++){
        if (b[i] != 0){
            isEmpty = false;
            break;
        }
    }
    if (isEmpty){
        cout << "Empty array" << endl;
    }
    bool unique = true;
    for (int i = 1; i < a.size(); i++){
        if (a[i] != a[0]){
            unique = false;
            break;
        }
    }
    if (unique){
        cout << "only one element" << endl;
    }
    else{
        sort(a.begin(), a.end());
        int first = a[a.size() - 1];
        int second;
        bool is_there = false;
        for (int i = a.size() - 2; i >= 0; i--){
            if (a[i] != first){
                second = a[i];
                is_there = true;
                break;
            }
        }
        if (is_there){
            cout << "Second highest " << second << endl;
        }
        else{
            cout << "no second highest" << endl;
        }
    }
    return 0;
}