def insertion_sort(array):
    size = len(array)
    for i in range(1, size):
        cache = array[i]
        j = i - 1
        while j >= 0 and array[j] > cache:
            array[j + 1] = array[j]
            j = j - 1
        array[j + 1] = cache

array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores == \n")
print(*array, sep="\t")

print("\n\n== Ordenando... ==\n")

insertion_sort(array)

for i in range(len(array)):
    print(array[i], end="\t")
print()

print("\n== Estos son tus valores ordenados ==\n")
print(*array, sep="\t")

print("\n")

input("Presiona Enter para continuar...")
