class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> permutate; 
        for(int i = 0; i < nums.size(); i++) {
            permutate.push_back(nums.at(nums.at(i)));
        }
        return permutate; 
    }
};
