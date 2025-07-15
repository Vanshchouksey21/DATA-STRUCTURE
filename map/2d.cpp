#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;
int main(){
    vector<vector <string>>v;

    for(int i = 0 ; i <=2 ; ++i){
        string name;
        cout<< "Enter the name of the student: ";
        cin >> name;
        vector<string> student;
        student.push_back(name);

        for(int j = 0 ; j <=2 ; ++j){
            string subject;
            cout << "Enter the subject: ";
            cin >> subject;
            student.push_back(subject);
        }

        v.push_back(student);
        

    }
     cout << "\nStudent Records:\n";
    
    for (const auto& student : v) {
        cout << "Name: " << student[0] << "\nSubjects: ";
            for (int i = 1; i < student.size(); ++i) {
            cout << student[i] << " ";
        }
        cout << endl;
    }

}