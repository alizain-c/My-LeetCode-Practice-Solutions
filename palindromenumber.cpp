class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if(temp < 0) {
            return false; 
        }
        
        long reverse = 0, remainder = 0; 
        while(x != 0) {
            remainder = x % 10; 
            reverse = reverse * 10 + remainder;
            x = x / 10; 
        }
        
        if(temp != reverse) {
            return false; 
        }
        return true; 
    }
};
