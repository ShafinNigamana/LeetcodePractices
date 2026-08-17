class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int countboat = 0;
        int i = 0;
        int j = n-1;
        sort(people.begin(), people.end());
        while (i <= j) {
            if(people[j]+people[i] <= limit){
                i++;
                j--;
            }
            else{
                j--;
            }
           countboat++; 
        }
        return countboat;
    }
};