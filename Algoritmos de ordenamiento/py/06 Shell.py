def shell_sort(array):
    size = len(array)
    gap = size // 2
    while gap > 0:
        for i in range(gap, size):
            j = i
            cache = array[i]
            while j >= gap and array[j - gap] > cache:
                array[j] = array[j - gap]
                j -= gap
            array[j] = cache
        gap //= 2

array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores == \n")
print(*array, sep="\t")

print("\n\n== Ordenando... ==\n")

shell_sort(array)

for i in range(len(array)):
    print(array[i], end="\t")
print()

print("\n== Estos son tus valores ordenados ==\n")
print(*array, sep="\t")

print("\n")

input("Presiona Enter para continuar...")
