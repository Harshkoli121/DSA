class Solution {
public:
    bool isValid(string s) {
        stack<char>S;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' ||s[i]== '[' || s[i]=='{')
            {
                S.push(s[i]);
            }else{
                if(S.size()==0){
                    return false;
                }
                char ch=S.top();
                if(s[i]==')' && ch!='('){
                    return false;
                }else if(s[i]==']' && ch!='['){
                    return false;
                }else if(s[i]=='}' && ch!='{'){
                    return false;
                }
                S.pop();
            }
        }
         if(S.size()==0)
            return true;
            return false;
        }
   };
