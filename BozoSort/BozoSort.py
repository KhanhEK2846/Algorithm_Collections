import random

def bozoSort(data):
	while not is_sorted(data):
		swap(data)

def is_sorted(data):
	for i in range(len(data) - 1):
		if (data[i] > data[i+1]):
			return False
	return True

def swap(data):
    x = random.randint(0, len(data) - 1)
    while True:
        y = random.randint(0, len(data) - 1)
        if x != y:
            break
    data[x], data[y] = data[y], data[x]

data = [3, 2, 4, 1, 0, 5]
bozoSort(data)
print("Sorted array :")
print(data)
