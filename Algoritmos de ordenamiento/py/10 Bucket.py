def bucket_sort(array):
    num_buckets = 10
    buckets = [[] for _ in range(num_buckets)]

    for num in array:
        bucket_index = int((num * num_buckets) / 100)
        buckets[bucket_index].append(num)

    for bucket in buckets:
        bucket.sort()

    index = 0
    for bucket in buckets:
        for num in bucket:
            array[index] = num
            index += 1

array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores == \n")
print(*array, sep="\t")

print("\n\n== Ordenando... ==\n")

bucket_sort(array)

for num in array:
    print(num, end="\t")
print()

print("\n== Estos son tus valores ordenados ==\n")
print(*array, sep="\t")

print("\n")

input("Presiona Enter para continuar...")
