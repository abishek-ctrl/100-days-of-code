class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //checking if the length of strings match or not
        if(s.size()!=t.size()) return false;
        //define a map to match the characters from both maps
        unordered_map<char,char> smap;
        unordered_map<char,char> tmap;
        
        for(int i=0;i<s.size();i++){ //looping through the 'i' string
            //checking if the character is in smap or not
            if(smap.find(s[i])==smap.end())     //if not
                smap[s[i]]=t[i]; //map it to the character of string 't' in smap
            else if(smap[s[i]]!=t[i])   //if it exists,check if it matches with t
                return false; //return false if it doesnt match
            
            //checking if the character is in the tmap or not
            if(tmap.find(t[i])==tmap.end())         //if not
                tmap[t[i]]=s[i];  //map it to the character of string 's' in tmap
            else if(tmap[t[i]]!=s[i])  //if it exists, check if it matches with s
                return false; //return false if it doesnt match
        }
        return true;  //return true in all other cases
    }
};
