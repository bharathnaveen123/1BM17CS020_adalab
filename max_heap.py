def is_max_heap(a):
    yes = True
    s = "No,it is not a max-heap"
    for i in range(1,len(a)):
        if a[int((i-1)/2)]<a[i]:
            yes = False
            break
    if yes:
        s = "Yes,it is a max-heap"
        return s
    return s
    

print(is_max_heap([90,85,87,86,50,40,30,20,10,0]))
