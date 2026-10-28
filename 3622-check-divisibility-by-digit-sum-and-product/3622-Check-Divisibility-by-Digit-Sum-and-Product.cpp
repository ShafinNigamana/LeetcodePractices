class Solution {
public:
    bool checkDivisibility(int n) {
        int temp =  n;
        int sumdigit = 0;
        int productdigit = 1;
        while(temp > 0){
            sumdigit += temp % 10;
            productdigit *= temp % 10;
            temp /= 10;
        }
        return n % (sumdigit + productdigit) == 0;
    }
};