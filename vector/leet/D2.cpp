#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> less, equal, greater;
    vector<int> less, equal, greater;
    vector<int> less, equal, greater;
    vector<int> less, equal, greater;

    
    for (int num : nums) {
        if (num < pivot) 
            less.push_back(num);
           
        else if (num == pivot) 
            equal.push_back(num);
        else 
            greater.push_back(num);
    }

    // Concatenate the three vectors
    vector<int> result;
    result.insert(result.end(), less.begin(), less.end());
    result.insert(result.end(), equal.begin(), equal.end());
    result.insert(result.end(), greater.begin(), greater.end());
    sort(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> nums = {2,3,77,10,5,26,19,7,};
    int pivot = 10;
    
    vector<int> result = pivotArray(nums, pivot);

    // Print the rearranged array
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
