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