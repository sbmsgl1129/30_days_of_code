#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here

total_swaps = 0
for i in range(n):
    num_swaps = 0
    for j in range(n-1):
        if a[j] > a[j+1]:
            a[j+1], a[j] = a[j], a[j+1]
            num_swaps += 1
    
    total_swaps += num_swaps
    if num_swaps == 0:
        break

print('Array is sorted in {} swaps.'.format(total_swaps))
print('First Element: {}'.format(a[0]))
print('Last Element: {}'.format(a[-1])

