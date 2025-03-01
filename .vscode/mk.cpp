#include <iostream>
#include <string>

using namespace std;

char findLostChar(string sent, string rec) {
    int sumSent = 0, sumRec = 0;
    
    for (char c : sent){
     sumSent += c;
}
    for (char c : rec) 
    {
    sumRec += c;
    }
    
    return sumSent - sumRec;
}

int main() {
    string sent, rec;
    getline(cin, sent);
    getline(cin, rec);
    
    cout << findLostChar(sent, rec) << endl;
    return 0;
}
