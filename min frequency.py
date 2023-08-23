arr=[1,1,1,2,2,3]
print(arr)
count_dict={}
minimum=float('inf')
min_element=None
for i in arr:
    if i in count_dict:
        count_dict[i]+=1
    else:
        count_dict[i]=1
    if count_dict[i]<=minimum:
        minimum=count_dict[i]
        min_element=i
print(count_dict)
print("minimum frequency element:",min_element)

