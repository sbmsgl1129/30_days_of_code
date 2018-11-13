from sys import stdin

num_entries = int(input())
phoneBook = {}

for i in range(0, num_entries):
    [name, phone]  = input().split();
    phoneBook[name] = phone

lines = stdin.read().splitlines()
for query in lines:
    if query in phoneBook:
        print('{}={}'.format(query, phoneBook[query]))
    else:
        print('Not found')
