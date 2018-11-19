class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum = 0;
        int stop_iter = sqrt(n);
        for(int i = 1; i <= stop_iter; i++){
            if(n % i  == 0){
                sum += i;
                int other_divisor = (n/i);
                if(other_divisor != i){
                    sum += other_divisor;
                }
            }
        }
};
