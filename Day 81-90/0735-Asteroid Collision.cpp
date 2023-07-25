class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n=ast.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty() or ast[i]>0) st.push(ast[i]);
            else{
                while(!st.empty() and st.top()>0 and st.top()<abs(ast[i]))
                    st.pop();
                if(!st.empty() and st.top()==abs(ast[i]))
                    st.pop();
                else if(st.empty() or st.top()<0)
                    st.push(ast[i]);
            }
        }
        int sz=st.size();
        vector<int> res(sz,0);
        while(!st.empty()){
            res[--sz]=st.top();
            st.pop();
        }
        return res;
    }
};