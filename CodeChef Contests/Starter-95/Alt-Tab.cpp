#BetterApproach

#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    stack<string> st;
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        st.push(temp);
    }
    unordered_map<string,int> mp;
    while(!st.empty()){
        temp=st.top();
        if(mp[temp]==1) st.pop();
        else{
            cout<<temp[temp.size()-2]<<temp[temp.size()-1];
            mp[temp]=1;
            st.pop();
        }
    }
    cout<<endl;
    
}

int main() {
    solve();
    return 0;
}

#ContestApproach

#include <iostream>
#include <stack>
#include <unordered_set>
#include <vector>
using namespace std;

string altTabOrder(const vector<string>& programs) {
    stack<string> programStack;
    unordered_set<string> encounteredPrograms;

    for (int i = programs.size() - 1; i >= 0; i--) {
        const string& program = programs[i];
        if (encounteredPrograms.find(program) == encounteredPrograms.end()) {
            programStack.push(program);
            encounteredPrograms.insert(program);
        }
    }

    string result;
    while (!programStack.empty()) {
        const string& program = programStack.top();
        result += program.substr(program.size() - 2);
        programStack.pop();
    }

    int len = result.size();
    for (int i = 0; i < len / 2; i += 2) {
        swap(result[i], result[len - i - 2]);
        swap(result[i + 1], result[len - i - 1]);
    }

    return result;
}

int main() {
    int numPrograms;
    cin >> numPrograms;
    cin.ignore(); 

    vector<string> programList;
    for (int i = 0; i < numPrograms; i++) {
        string program;
        getline(cin, program);
        programList.push_back(program);
    }

    string order = altTabOrder(programList);
    cout << order << endl;

    return 0;
}
