def right_rotate(arr,st,end):
    while(st<end):
        temp=arr[st]
        arr[st]=arr[end]
        arr[end]=temp
        st=st+1
        end=end-1
        
    return arr
arr=[5,9,3,9,10]
n=len(arr)
k=int(input("enter the positions:"))
arr=right_rotate(arr,0,n-1);
arr=right_rotate(arr,0,k-1);
arr=right_rotate(arr,k,n-1);
print(arr)

