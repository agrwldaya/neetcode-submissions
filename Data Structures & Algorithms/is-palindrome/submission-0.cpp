class Solution {
public:
    bool isPalindrome(string s) {
        string str ="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')|| (s[i]>='0' && s[i]<='9')){
                str+= tolower(s[i]);
            }
        }
        string reverse_str = str;
        cout<<reverse_str;
        reverse(reverse_str.begin(),reverse_str.end());
        return reverse_str==str; 
    }
};
