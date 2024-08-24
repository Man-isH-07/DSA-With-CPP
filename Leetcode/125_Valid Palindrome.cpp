//125. Valid Palindrome

class Solution {
private:
    bool isvalid(char ch)
    {
        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
        {
            return 1;
        }

        return 0;
    }

    char tolowercase(char ch)
    {
        if( ( ch >= 'a' && ch <= 'z' ) || ( ch >= '0' && ch <= '9'  ) )
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

public:    
    bool isPalindrome(string s) {

        //Adding valid chars to new string

        string ans ="";

        for(int i=0;i<s.length();i++)
        {
            if(isvalid(s[i]) == 1)
            {
                ans.push_back(s[i]);
            }
        }

        //Converting all to lower case

         for(int i=0;i<ans.length();i++)
        {
           ans[i] = tolowercase(ans[i]);
        }

        //Checking palindrome or not ?

        int start =0;
        int end = ans.length()-1;
        while(start < end)
        {
            if(ans[start] != ans[end])
            {
                return 0;
            }
            else
            {
                start++;
                end--;
            }
        }

        return 1;
    }
};