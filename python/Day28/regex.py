#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    N = int(input())

    #pattern = re.compile(r'[a-z]@gmail.com$')
    firstNames = []

    for N_itr in range(N):
        firstNameEmailID = input().split()

        firstName = firstNameEmailID[0]

        emailID = firstNameEmailID[1]
        
        match = re.match(r'[a-z.]+@gmail\.com$', emailID)
        if match is not None:
            #print(emailID)
            firstNames.append(firstName)

    firstNames.sort()
    for name in firstNames:
        print(name)
