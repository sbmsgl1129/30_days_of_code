#!/bin/python3

import math
import os
import random
import re
import sys

def hourGlass(arr, row_start, col_start):
    hourGlassSum = 0
    for i in range(3):
        for j in range(3):
            if i == 1 and j != 1:
                continue;
            hourGlassSum = hourGlassSum + arr[row_start + i][col_start + j]
            
    return hourGlassSum

if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
    
    max_sum = -sys.maxsize-1
    current_sum = 0
    for i in range(4):
        for j in range(4):
            current_sum = hourGlass(arr, i , j)
            max_sum = max(current_sum, max_sum)
            
    print(max_sum)
