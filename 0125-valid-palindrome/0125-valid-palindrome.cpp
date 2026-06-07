class Solution {
public:
    bool isPalindrome(string s) {

        for(char &ch : s)
        {
            ch = tolower(ch);
        }

        int low = 0;
        int right = s.size() - 1;

        while(low < right)
        {

            while (low < right && !isalnum(s[low]))
                low++;

            while (low < right && !isalnum(s[right]))
                right--;
            if(s[low] != s[right])
                return false;

            low++;
            right--;
        }

        return true;
    }
};