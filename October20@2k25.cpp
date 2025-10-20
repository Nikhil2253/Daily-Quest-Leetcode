class Solution {
public:
    int operate(int val, string operation){
       int res = val;
       if(operation == "++X" || operation == "X++"){
         res++;
       } else {
         res--;
       }
       return res;
    }

    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int val = 0;
        for(int i = 0; i < n; i++){
           val = operate(val,operations[i]);
        }
        return val;
    }
};
