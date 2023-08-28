def union(list1, list2):
    union_list = list1
    for i in list2:
        if i not in union_list:
            union_list.append(i)

    return union_list

list1 = [1, 2, 3, 4, 5]
list2 = [4, 5, 6, 7, 8]

union_list = union(list1, list2)
print(union_list)
