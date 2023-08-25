arr=[7,6,9,3,9,5]
temp=arr[0]
for i in range(len(arr)-1):
    arr[i]=arr[i+1]
arr[len(arr)-1]=temp
print(arr)
