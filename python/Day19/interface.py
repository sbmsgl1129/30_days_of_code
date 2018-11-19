class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        result = 1
        if(n != 1):
            result += n
        for i in range(2, (n // 2 + 1)):
            if n % i == 0:
                result += i;
        return result
