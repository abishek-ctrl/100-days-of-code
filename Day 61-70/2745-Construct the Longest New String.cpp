class Solution {
public:
    int longestString(int x, int y, int z) {
        int mn=min(x,y);
        if(x==y) return (x*4 + z*2);
        else{
            return (mn*2 + (mn+1)*2 +z*2);
        }
    }
};