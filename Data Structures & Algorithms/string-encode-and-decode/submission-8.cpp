class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedStr = "";
        vector<int>len;
        for(auto str:strs){
            encodedStr+=str;
            len.push_back(str.size());
        }
        for(int i=len.size()-1;i>=0;i--){
            encodedStr +=("(" + to_string(len[i]) + ")");
        }
        encodedStr +=("(" + to_string(len.size()) + ")");
        cout<<encodedStr<<endl;
        return encodedStr;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string len = "";
        int i =  s.size()-2;
        while(i>0 && s[i]!='('){
            len+=s[i--];
        }
        reverse(len.begin(),len.end());
        i-=2;
        int j = 0;

        for(int l=0;l<stoi(len);l++){
            string strLen = "";
            while(i>=0 && s[i]!='('){
                strLen+=s[i--];
            }
            reverse(strLen.begin(),strLen.end());
            i-=2;
            cout<<stoi(strLen)<<endl;
            int k = j;
            string str = "";
            while(j<(k+stoi(strLen))){
                str+=s[j++];
            }
            ans.push_back(str);
        }
        return ans;
    }
};
