
def binarySearch(nums,low,high,target):
    if low > high:
        return -1
    mid = (low + high) // 2
    if nums[mid] == target:
        return mid
    elif target > nums[mid]:
        return binarySearch(nums, mid + 1, high, target)
    else:
        return binarySearch(nums, low, mid - 1, target)

a = [1,2,3,4,5]
num = 16
index = binarySearch(a,0,len(a)-1,num)
if index == -1:
    print("The target is not present.")
else:
    print("The target is at index:", index) 


