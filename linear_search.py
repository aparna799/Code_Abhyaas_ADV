def linear_search(arr,n,num):
    for i in range(len(arr)):
        if arr[i]==num:
            return i
arr=[1,2,3,4,5]
n=len(arr)
num=int(input("enter number to find"))
position=linear_search(arr,n,num)
print("number position is:",position)
