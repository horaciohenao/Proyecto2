def counting_sort(array):
    size = len(array)

    min_value = min(array)
    max_value = max(array)
    range_value = max_value - min_value + 1
    count = [0] * range_value

    for num in array:
        count[num - min_value] += 1

    index = 0
    for i in range(range_value):
        while count[i] > 0:
            array[index] = i + min_value
            count[i] -= 1
            index += 1

array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores == \n")
print(*array, sep="\t")

print("\n\n== Ordenando... ==\n")

counting_sort(array)

for num in array:
    print(num, end="\t")
print()

print("\n== Estos son tus valores ordenados ==\n")
print(*array, sep="\t")

print("\n")

input("Presiona Enter para continuar...")
