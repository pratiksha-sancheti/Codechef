
n=int(input())
A=[0]*n
for i in range(n):
    A[i]=int(input())
A.sort()
max=0
for i in range(n):
    s=A[i]*(n-i)
    if s>max:
        max=s
print(max)
