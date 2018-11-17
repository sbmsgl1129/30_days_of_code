#Write your code here
class Calculator_Exception(Exception):
    pass
        
class Calculator:
    def power(self, n, p):
        if n < 0 or p < 0:
            raise Calculator_Exception("n and p should be non-negative")
        return n**p
