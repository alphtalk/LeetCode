/*
分析，这道题要求对一个数组加上1之后完成进位，考虑到有以下几种情况：
1）首先全是9：这种情况下将所有位置为0并且在数组头部添加1即可。
2）其次是比如899，这种情况，进位到最后一位时不用继续进位，只需加一即可
3）还有比如2399这种情况，进位到千位时3+1即可退出for循环
4）还有123这种情况，直接个位加一退出循环
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        for(i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
                while(--i>=0&&digits[i]==9)//--i变为-1则会短路直接跳出for循环不会执行后面语句
                    digits[i]=0;
                if(i==-1)//如果i变为-1，说明是第一种情况则在开始位置插入一
                    digits.insert(digits.begin(),1);
                else{//如果i没有变为-1,说明是第二或第三种情况则+1后直接退出
                    digits[i]++;//如果碰到一位不是9，则将此位加一后即可完成。
                    break;
                }
            }
            else{//如果一开始个位就不是9则加一后退出即可
                digits[i]++;
                break;
            }
        }
        return digits;
    }
};