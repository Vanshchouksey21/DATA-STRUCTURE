#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
    vector<vector<int>>ans;
    int temp1=0, temp2=0;
    int n1 = nums1.size(), n2 = nums2.size();
    while(temp1<n1 && temp2<n2){
        if(nums1[temp1][0]==nums2[temp2][0]){
            ans.push_back({nums1[temp1][0],nums1[temp1][1]+nums2[temp2][1]});
            temp1++;temp2++;
        }
        else if(nums1[temp1][0]<nums2[temp2][0]){
            ans.push_back({nums1[temp1][0],nums1[temp1][1]});
            temp1++;               
        }
        else{
            ans.push_back({nums2[temp2][0],nums2[temp2][1]});
            temp2++;                
        }
    }

    while(temp1<n1){
        ans.push_back({nums1[temp1][0],nums1[temp1][1]});
        temp1++; 
    }

    while(temp2<n2){
        ans.push_back({nums2[temp2][0],nums2[temp2][1]});
        temp2++; 
    }
    return ans; 
}
// Function to take dynamic input
vector<vector<int>> getInput(int size) {
    vector<vector<int>> nums;
    cout << "Enter " << size << " pairs (id value):\n";
    for (int i = 0; i < size; ++i) {
        int id, value;
        cin >> id >> value;
        nums.push_back({id, value});
    }
    return nums;
}

// Function to print the result
void printResult(const vector<vector<int>>& result) {
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[" << result[i][0] << "," << result[i][1] << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]\n";
}

int main() {
    vector<vector<int>> nums1 = {{1,2}, {5,3}, {4,5}};
    vector<vector<int>> nums2 = {{2,4}, {3,2}, {3,1}};

    vector<vector<int>> result = mergeArrays(nums1, nums2);
    printResult(result);  // Output: [[1,6],[2,3],[3,2],[4,6]]

    vector<vector<int>> nums3 = {{2,4}, {3,6}, {5,5}};
    vector<vector<int>> nums4 = {{1,3}, {4,3}};

    vector<vector<int>> result2 = mergeArrays(nums3, nums4);
    printResult(result2);  // Output: [[1,3],[2,4],[3,6],[4,3],[5,5]]

    return 0;
}
