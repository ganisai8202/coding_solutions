import sys
a = [int(x) for x in input().split(' ')]
counter = 0
for x in range(len(a)-1):
    for y in range(x+1, len(a)):
        if a[x] > a[y]:
            a[x],a[y] = a[y], a[x]
            counter += 1

print('Array is sorted in', counter, 'swaps.')
print('First Element:', a[0])
print('Last Element:', a[len(a)-1])
