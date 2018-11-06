test_cases = int(input())

for i in range(0, test_cases):
    s = input()
    even_str = s[0::2]
    odd_str  = s[1::2]
    print('{} {}'.format(even_str, odd_str))
