a=[1,1,2,2,3,5,5]
xor=0
for i in range(len(a)):
    xor=xor^a[i]
print("number appeared once:",xor)
