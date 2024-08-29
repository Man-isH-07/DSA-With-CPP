//567. Permutation in String
class Solution {
private:
     bool checkEqual(int S1[26],int S2[26])
    {
        for(int i=0;i<26;i++)
        {
            if(S1[i] != S2[i])
            {
                return 0;
            }
        }
        return 1;
    }
public:

    bool checkInclusion(string s1, string s2) {
        
        int countS1[26] = {0};
        for(int i=0;i<s1.length();i++)
        {
            int index = s1[i] - 'a';
            countS1[index]++;
        }

        int i=0;
        int windowSize = s1.length();
        int countS2[26] = {0};
        
        while( (i < windowSize ) && ( i < s2.length()) )
        {
            char charS2 = s2[i];
            int index = charS2 - 'a';
            countS2[index]++;

            i++;
        }

        if(checkEqual(countS1,countS2))
         return 1; 


        while(i < s2.length())
        {
            char nextChar = s2[i];
            int index = nextChar - 'a';
            countS2[index]++;

            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            countS2[index]--;

            i++;

            if(checkEqual(countS1,countS2))
              return 1;
        }

        return 0;
    }
};