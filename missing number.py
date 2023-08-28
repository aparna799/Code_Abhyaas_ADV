a=[1,2,3,5]
n=5
"""sum=n*(n+1)/2
for i in range(len(a)):
    sum=sum-a[i]
print("missing number:",sum)"""
xor=0
for i in range(1,n+1):
    xor=xor^i
for i in range(len(a)):
    xor=xor^a[i]

print("missing number:",xor)
    
