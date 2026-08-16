class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size();

        for(int i = 0; i < n; i++){

            int tank = 0;
            bool possible = true;

            for(int j = 0; j < n; j++){

                int station = (i + j) % n;

                tank += gas[station];
                tank -= cost[station];

                if(tank < 0){
                    possible = false;
                    break;
                }
            }

            if(possible){
                return i;
            }
        }

        return -1;
    }
};