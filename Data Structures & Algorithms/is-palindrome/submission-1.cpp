class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size();

        while(i<j){
            char a = tolower(s[i]);
            char b =  tolower(s[j]);
            if(!((a>='a' && a<='z') ||(a>='0' && a<='9'))){
                i++;
            }else if(!((b>='a' && b<='z') ||(b>='0' && b<='9'))){
                j--;
            }else{
                if(a!=b)return false;
                i++;
                j--;
            }
        }
        return true;
    }
};
