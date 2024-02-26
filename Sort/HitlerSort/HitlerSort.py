def HitlerSort(arr):
    n = len(arr)
    i = 0
    while i < n-1:
        if arr[i] > arr[i+1]:
            arr.pop(i+1)
            n = len(arr)
        else:
            i+=1
        
    return arr


if __name__ == "__main__":
	arr = [2, 1, 4, 3, 6, 5, 8, 7, 10,9,12,24,56,1,2,3]
	print(HitlerSort(arr))