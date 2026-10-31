class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        if(s.length()==t.length()){
            for(int i=0;i<s.length();i++) mpp[s[i]]++;
            for(int i=0;i<s.length();i++){
                if(mpp.find(t[i])==mpp.end() || (mpp.find(t[i])->second)==0){
                    return false;
                }
                mpp[t[i]]--;
            }
            return true;
        }
        else return false;
    }
};
