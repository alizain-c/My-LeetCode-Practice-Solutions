class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int var = 0; 
        
        for(int i = 0; i < operations.size(); i++) {
            if(operations.at(i) == "X++" || operations.at(i) == "++X") {
                var += 1; 
            }
            if(operations.at(i) == "X--" || operations.at(i) == "--X") {
                var -= 1; 
            }
        }
        return var; 
    }
};
