
def countingSort(data, exp1):
	n = len(data)
	output = [0] * (n)
	count = [0] * (10)
	for i in range(0, n):
		index = data[i] // exp1
		count[index % 10] += 1

	for i in range(1, 10):
		count[i] += count[i - 1]

	i = n - 1
	while i >= 0:
		index = data[i] // exp1
		output[count[index % 10] - 1] = data[i]
		count[index % 10] -= 1
		i -= 1
  
	i = 0
	for i in range(0, len(data)):
		data[i] = output[i]



def radixSort(data):
	max1 = max(data)
	exp = 1
	while max1 / exp >= 1:
		countingSort(data, exp)
		exp *= 10



data = [170, 45, 75, 90, 802, 24, 2, 66]
radixSort(data)
print(data)