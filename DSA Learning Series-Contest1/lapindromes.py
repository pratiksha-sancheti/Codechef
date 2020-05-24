n = int(input())
for i in range(n):
    str = input()
    l = len(str)
    str1 = str[:l//2]
    str1 = sorted(str1)

    if l%2 !=0:
        str2 = str[l//2+1:]
        
    else:
        str2 = str[l//2:]
        
    str2 = sorted(str2)

    if str1==str2:
        print("YES")
    else:
        print("NO")