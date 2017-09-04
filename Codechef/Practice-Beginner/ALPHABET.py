# https://www.codechef.com/problems/ALPHABET

known = list(input())
words = int(input())

for word in range(words):
    flag = False
    for char in input():
        if char not in known:
            print("No")
            flag = True
            break
    if not flag:
        print("Yes")
