#!/bin/python3

import sys

S = input().strip()
try:
    integer_S = int(S)
    print(integer_S)
except:
    print('Bad String')
