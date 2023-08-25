arr=[1,7,3,4,5,6]
temp=1
for i in range(len(arr)-1):
    if(arr[i]>arr[i+1]):
        temp=0
        break
if temp:
    print("the array is sorted")
else:
    print("the array is not sorted")

    
