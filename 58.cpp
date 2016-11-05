class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        int length=0;
        bool begin=false;
        for(int i=len-1;i>=0;i--){
             if(s[i]!=' '){
                length++;
                begin=true;
             }
             else if(begin&&s[i]==' ')
                break;
        }
        return length;   
    }
};