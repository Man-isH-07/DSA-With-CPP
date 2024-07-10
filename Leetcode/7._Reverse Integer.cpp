/* 7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.


*/

class Solution {
public: 
    int reverse(int x) {
        int ans=0;
        int i=1;
        while(x!=0)
        {
            int digit = x % 10;

            ans = (ans * 10) + digit;

            x=x/10;
            i++;
        }

        return  ans;
    }
};