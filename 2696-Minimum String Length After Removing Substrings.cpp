class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int l=s.length();
        for(int i=0;i<l;i++){
            char c=s.at(i);
            if(st.size()==0)st.push(c);
            else{
                char t=st.top();
                if(c=='B' or c=='D'){
                    if(c=='B'){
                        if(t=='A') st.pop();
                        else st.push(c);
                    }else{
                        if(t=='C') st.pop();
                        else st.push(c);
                    }
                }else st.push(c);
            }
        }
        return st.size();
    }
};