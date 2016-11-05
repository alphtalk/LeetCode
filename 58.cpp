/*
分析：因为要找最后一个单词的字母个数，所以我们从后往前找，从字符串的最后一个字符（包括空格）开始遍历判断是否为空格，如果不为空格则开始为最后一个单词计数，
直到遍历到空格时证明最后一个单词已经计数完毕，则退出循环返回计数器。
*/

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
