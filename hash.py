arr = [1, 2, 2, 3, 2, 3]
print(arr)

count_dict = {}

for i in arr:
    if i in count_dict:
        count_dict[i] += 1
    else:
        count_dict[i] = 1

print(count_dict)

    
    
    
