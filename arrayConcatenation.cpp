class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> concat;
        for(int i = 0; i < nums.size(); i++) {
            concat.push_back(nums.at(i));
        }
        
        for(int i = 0; i < nums.size(); i++) {
            concat.push_back(nums.at(i));
        }
        return concat; 
    }
};
