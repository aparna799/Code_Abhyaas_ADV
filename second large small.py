arr=[1,5,2,3,6]
maximum=float("-inf")
minimum=float("inf")
sec_min=float("inf")
sec_max=float("-inf")
for i in range(len(arr)):
    if(arr[i]>maximum):
        sec_max=maximum
        maximum=arr[i]
    elif(arr[i]>sec_max and arr[i]<maximum):
        sec_max=arr[i]
    if(arr[i]<minimum):
        sec_min=minimum
        minimum=arr[i]
    elif(arr[i]<sec_min and arr[i]>minimum):
        sec_min=arr[i]

print("second largest element:",sec_max)
print("second smallest element:",sec_min)
        
