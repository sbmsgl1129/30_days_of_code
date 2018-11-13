#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    n_bin = format(n, 'b')
    
    max_cons_ones = 0
    current_cons_ones = 0
    
    for char in n_bin:
        if char == '1':
            current_cons_ones = current_cons_ones + 1
        else:
            max_cons_ones = max(max_cons_ones, current_cons_ones)
            current_cons_ones = 0
    
    print(max(max_cons_ones, current_cons_ones))
