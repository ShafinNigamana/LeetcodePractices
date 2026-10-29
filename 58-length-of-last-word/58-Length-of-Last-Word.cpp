class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        
        if(s.empty()){
            return 0;
        }
        while(s[n-1] == ' '){
            n--;
        }
        for(int i = n-1; i>=0; i--){
            if(isalpha(s[i])){
                count++;
                
            }
            else if(s[i] == ' '){
                    return count;
            }
        }
        return count;
    }
};