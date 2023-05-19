def selection_sort(array):
    size = len(array)
    for i in range(size - 1):
        minIndex = i
        for j in range(i + 1, size):
            if array[j] < array[minIndex]:
                minIndex = j
        if minIndex != i:
            array[i], array[minIndex] = array[minIndex], array[i]

array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores == \n")
print(*array, sep="\t")

print("\n\n== Ordenando... ==\n")

selection_sort(array)

for i in range(len(array)):
    print(array[i], end="\t")
print()

print("\n== Estos son tus valores ordenados ==\n")
print(*array, sep="\t")

print("\n")

input("Presiona Enter para continuar...")
