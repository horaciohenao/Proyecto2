class Node:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None

def create_node(value):
    new_node = Node(value)
    return new_node

def insert_node(root, value):
    if root is None:
        return create_node(value)

    if value < root.data:
        root.left = insert_node(root.left, value)
    else:
        root.right = insert_node(root.right, value)

    return root

def in_order_traversal(root, array, index):
    if root is None:
        return

    in_order_traversal(root.left, array, index)
    array[index[0]] = root.data
    index[0] += 1
    in_order_traversal(root.right, array, index)

def binary_tree_sort(array):
    size = len(array)
    root = None

    for i in range(size):
        root = insert_node(root, array[i])

    index = [0]
    in_order_traversal(root, array, index)

array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores == \n")
print(*array, sep="\t")

print("\n\n== Ordenando... ==\n")

binary_tree_sort(array)

for num in array:
    print(num, end="\t")
print()

print("\n== Estos son tus valores ordenados ==\n")
print(*array, sep="\t")

print("\n")

input("Presiona Enter para continuar...")
