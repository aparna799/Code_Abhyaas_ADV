arr=[1,2,2,3,2,3]
print(arr)
count_dict={}
maximum=1
max_element=0
for i in arr:
    if i in count_dict:
        count_dict[i]+=1
        if count_dict[i]>maximum:
            maximum=count_dict[i]
            max_element=i
    else:
        count_dict[i]=1
print(count_dict)
print("maximum frequency element:",max_element)
