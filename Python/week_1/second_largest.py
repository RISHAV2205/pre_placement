arr = [10, 20, 4, 45, 99, 99, 45]
unique_arr = list(set(arr))      
unique_arr.sort()               
if len(unique_arr) < 2:
    print("No second largest element.")
else:
    print("Second largest element is:", unique_arr[-2])
