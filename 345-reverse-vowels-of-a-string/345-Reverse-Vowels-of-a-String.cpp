class Solution {
public:
    string reverseVowels(string s) {
        vector<char> Vowels = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            bool isvowel1 = false;
            bool isvowel2 = false;
            for(char v:Vowels){
                if(s[left] == v){
                    isvowel1 = true;
                    break;
                }
                else{
                    isvowel1 = false;
                }
            }

            for(char v:Vowels){
                if(s[right] == v){
                    isvowel2 = true;
                    break;
                }
                else{
                    isvowel2 = false;
                }
            }
            if(isvowel1 == true && isvowel2 == true){
                s[left] = s[left] ^ s[right];
                s[right] = s[left] ^ s[right];
                s[left] = s[left] ^ s[right];
                left++;
                right--;
            }
            if(!isvowel1){
                left++;
            }
            if(!isvowel2){
                right--;
                }
        }
        return s;
    }
};