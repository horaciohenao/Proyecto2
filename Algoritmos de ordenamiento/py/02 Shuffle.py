import random

def shuffle_sort(array):
    size = len(array)
    for i in range(size):
        cache2 = random.randint(i, size-1)
        array[i], array[cache2] = array[cache2], array[i]

def bubble_sort(array):
    size = len(array)
    for i in range(size):
        for j in range(size - i - 1):
            if array[j+1] < array[j]:
                array[j], array[j+1] = array[j+1], array[j]

array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores == \n")
print(*array, sep="\t")

print("\n\n== Desordenando... ==\n")

shuffle_sort(array)

for i in range(len(array)):
    print(array[i], end="\t")
print()

print("\n== Bubblesort ==\n")

bubble_sort(array)

for i in range(len(array)):
    print(array[i], end="\t")
print()

print("\n== Estos son tus valores ordenados ==\n")
print(*array, sep="\t")

print("\n")

input("Presiona Enter para continuar...")
