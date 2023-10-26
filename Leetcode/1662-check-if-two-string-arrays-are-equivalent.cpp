class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1 = word1.size(),
            n2 = word2.size();
        
        int i1 = 0,
            j1 = 0,
            i2 = 0,
            j2 = 0;
        for(; i1<n1 && i2<n2; ){
            if(word1[i1][j1] != word2[i2][j2])
                return false;
            
            if(!word1[i1][++j1]){
                ++i1;
                j1 = 0;
            }
            
            if(!word2[i2][++j2]){
                ++i2;
                j2 = 0;
            }
        }
        
        return i1==n1 && i2==n2;
    }
};
