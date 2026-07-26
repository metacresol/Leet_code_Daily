class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        // Count characters in magazine
        for (char ch : magazine) {
            freq[ch - 'a']++;//bcaoz we use only 26 character and assci value of leeters are greater than 26 in order to map with index 0 we sub the asscie value of letter with small a.
        }

        // Check if ransomNote can be formed
        for (char ch : ransomNote) {
            if (freq[ch - 'a'] == 0) {
                return false;
            }
            freq[ch - 'a']--;
        }

        return true;
    }
};