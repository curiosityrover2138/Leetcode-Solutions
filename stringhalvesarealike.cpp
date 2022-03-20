class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char> vowel{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int countleft=0;
        int countright=0;
        for(int i=0;i<s.size()/2;i++){
            for(int j=0;j<vowel.size();j++){
                if(vowel[j]==s[i]){
                    countleft++;
                }
            }
        }
        for(int i=s.size()/2;i<s.size();i++){
            for(int j=0;j<vowel.size();j++){
                if(vowel[j]==s[i]){
                    countright++;
                }
            }
        }
        if(countleft==countright){
            return true;
        }
        else return false;
    }
};
