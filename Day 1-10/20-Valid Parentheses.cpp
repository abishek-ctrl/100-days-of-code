class Solution {
public:
    bool isValid(string s) {
        stack<char> st; //create a stack to push and pop the brackets
        unordered_map<char,char> brackets; //map for the bracket pairs
        brackets[')']='(';
        brackets[']']='[';
        brackets['}']='{';
        
        for(char i:s){ //looping through the charcters in the string 's
            if(i=='(' or i=='[' or i=='{')  st.push(i); //if opening brackets found, push to stack
            else if(i==')' or i==']' or i=='}'){ //if closing brackets found, 
            //check if stack is empty or the top element is equal to the related open brackets
                if(st.empty() or st.top()!=brackets[i]){  
                    return false;//return false 
                }
                st.pop();//if opening matches the closed brackets, remove it from the stack
                }
            }
        //check if the stack is empty,if true,then brackets have been removed 
        //if false, there are unmatched brackets, which implies that they are invalid
        return st.empty(); 
    }
};
