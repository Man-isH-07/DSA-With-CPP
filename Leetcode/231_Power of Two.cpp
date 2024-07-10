//231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans;
        int i = 0;

        while(i<=30)
        {
           ans = pow(2,i);
           if(ans==n)
           {
            return true;
           }

           i=i+1;
        } 
              
        return false;
        
    }
};