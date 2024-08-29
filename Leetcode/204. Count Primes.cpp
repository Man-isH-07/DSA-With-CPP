//204. Count Primes

class Solution {
public:
    int countPrimes(int n) {

        int cnt=0;
        vector<bool> ans(n+1,true);

        ans[0]=ans[1]=false;


        for(int i=2;i<n;i++)
        {
            if(ans[i])
            {
                cnt++;
                for(int j=i*2;j<n;j=j+i)
                {
                    ans[j]=false;
                }
            }
        }

        return cnt;
    }
};