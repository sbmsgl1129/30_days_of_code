# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

test_cases = int(input())
for _ in range(test_cases):
    num = int(input())
    
    if num == 1:
        print("Not prime")
        continue
    

    sqrt_num = int(math.sqrt(num))
    is_prime = True
    for i in range(2, sqrt_num+1):
        if num % i == 0:
            is_prime = False
            break
    
    if is_prime:
        print("Prime")
    else:
        print("Not prime")
