/* 69. Sqrt(x)

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

*/


class Solution {
public:
    int mySqrt(int x) {

        long long int ans = 0;
        int start = 0;
        int end = x-1;

        long long int mid = (start + end) / 2;

        if(x <= 1)
        { 
            ans = x;
            return ans;
        }
        else
        {
    
        while(start <= end)
        {
            long long int sq = mid * mid;
            if(sq == x)
            {
               ans = mid;
            }

            if(sq > x)
            {
                end = mid -1;
            }
            else
            {
                ans =mid;
                start = mid + 1;
            }

            mid = (start + end)/2;
        }
        
        }
        return ans;
    }
};