def NoT(s):
    temp = 0
    ans = 0
    while (len(s) > 1):
     
        temp = 0
        for i in range(len(s)):
            temp += (ord(s[ i ]) -
                              ord('0'))
 
        s = str(temp)
        ans += 1
 
    return ans
 
s=input()
print(NoT(s))