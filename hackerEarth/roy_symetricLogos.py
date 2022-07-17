from itertools import product
t=int(input())
while t:
    n=int(input())
    A=[input() for _ in range(n)]
    flag=1
    for i,j in product(range(n),range(n)):
        if A[i][j]=='1':
            if A[n-i-1][j]=='1' and A[i][n-j-1]=='1':
                flag=1
            else:
                flag=0
                break
        if flag==0:
            break
    if flag==1:
        print('YES')
    else:
        print('NO')
    t-=1
