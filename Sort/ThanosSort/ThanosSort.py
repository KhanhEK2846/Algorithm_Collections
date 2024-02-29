import random as rd

def is_sorted(data):
    for i in range(len(data) - 1):
        if data[i] > data[i + 1]:
            return False
    return True

def Snap(data):
    n = len(data)//2
    for i in range(n):
        target = rd.randint(0, len(data) - 1)
        data.pop(target)
        

def ThanosSort(data):

    while not is_sorted(data):
        if len(data) == 1:
            break
        else:
            Snap(data)
        
    return data


if __name__ == "__main__":
	arr = [2, 1, 4, 3, 6, 5, 8, 7, 10,9,12,24,56,1,2,3]
	print(ThanosSort(arr))