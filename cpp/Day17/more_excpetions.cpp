//Write your code here
class Calculator_Exception : public exception{
    const char* what() const throw(){
        return "n and p should be non-negative";
    }
};

class Calculator{
    public:
        int power(int base, int power){
            if(base < 0 || power < 0){
                Calculator_Exception cal_exception;
                throw cal_exception;
            }else{
                return pow(base, power);
            }
        }
};
