# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys

rdate = list(map(int, input().split()))
edate = list(map(int, input().split()))

if (rdate[2] < edate[2]) or (rdate[2] == edate[2] and rdate[1] < edate[1]) or (rdate[2] == edate[2] and rdate[1] == edate[1] and rdate[0] <= edate[0]):
    print(0)
    sys.exit(0)


if rdate[2] > edate[2]:
    print(10000)
elif rdate[1] > edate[1]:
    print('{}'.format(500*(rdate[1] - edate[1])))
elif rdate[0] > edate[0]:
    print('{}'.format(15*(rdate[0] - edate[0])))
