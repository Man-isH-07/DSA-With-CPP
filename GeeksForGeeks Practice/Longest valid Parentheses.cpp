//Longest valid Parentheses

class Solution {
  public:
    int maxLength(string& str) {
        // code here
        stack<int> stk;
        stk.push(-1); 
        int maxLength = 0;

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '(') {
                stk.push(i); 
            } else {
                stk.pop(); 
                if (stk.empty()) {
                    stk.push(i); 
                } else {
                    maxLength = max(maxLength, i - stk.top()); 
                }
            }
        }
        
        return maxLength;
    }
};