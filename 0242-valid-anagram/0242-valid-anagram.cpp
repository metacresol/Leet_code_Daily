class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>hash(256,0);
       if(s.size()!=t.size())
            return false;
       for(char ch : s)
         hash[ch]++;

       for(char ch : t)
         hash[ch]--;
        for(int val:hash){
            if(val>0)
                return false;
        }
        return true;
    }
};