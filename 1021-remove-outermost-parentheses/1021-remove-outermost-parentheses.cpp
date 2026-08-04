    class Solution {
    public:
        string removeOuterParentheses(string s) {
            int l=0;
            string res="";
            for(char i:s){
                if(i == '(')
                {
                    if(l>0)
                        res += i;
                    l++;
                }
                else
                {
                    l--;
                    if(l>0)
                        res += i;
                }
            }
            return res;
        }
    };