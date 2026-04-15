class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0)
            return false;
        stack<char> st;
        for(char c : s){
            if(c == '[' || c == '{' || c == '('){
                st.push(c);
            }
            else if(c == ']'){
                if(st.empty() || st.top() != '[')
                    return false;
                st.pop();
            }
            else if(c == '}'){
                if(st.empty() || st.top() != '{')
                    return false;
                st.pop();
            }
            else if(c == ')'){
                if(st.empty() || st.top() != '(')
                    return false;
                st.pop();
            }
        } 
        return st.empty();
    }
};