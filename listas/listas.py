def printarray(array):
    print("\n[", end=" ")
    for i in range(len(array)):
        if array[i] == -345889306:
            print("_", end=" ")
        else:
            print(array[i], end=" ")
    print("]\n")


def bubbleSort(array):
    isize = 0

    print("\n== Estos son tus valores == \n")

    for i in range(len(array)):
        if array[i] == -345889306:
            break
        print(array[i], end="    ")
        isize += 1

    print("\n\n== Ordenando (BubbleSort)... ==\n")

    for i in range(isize - 1):
        for j in range(isize - i - 1):
            if array[j + 1] < array[j]:
                array[j], array[j + 1] = array[j + 1], array[j]

        for k in range(isize):
            print(array[k], end="    ")
        print()

    print("\n== Estos son tus valores ordenados == \n")

    for i in range(isize):
        print(array[i], end="    ")
    print("\n")


def insertionSort(array):
    cache = 0
    isize = 0

    print("\n== Estos son tus valores == \n")

    for i in range(len(array)):
        if array[i] == -345889306:
            break
        print(array[i], end="    ")
        isize += 1

    print("\n\n== Ordenando (InsertionSort)... ==\n")

    for i in range(1, isize):
        cache = array[i]
        j = i - 1

        while j >= 0 and array[j] > cache:
            array[j + 1] = array[j]
            j -= 1

        array[j + 1] = cache

        for k in range(isize):
            print(array[k], end="    ")
        print()

    print("\n== Estos son tus valores ordenados == \n")

    for i in range(isize):
        print(array[i], end="    ")
    print("\n")


def selectionSort(array):
    cache = 0
    isize = 0

    print("\n== Estos son tus valores == \n")

    for i in range(len(array)):
        if array[i] == -345889306:
            break
        print(array[i], end="    ")
        isize += 1

    print("\n\n== Ordenando (SelectionSort)... ==\n")

    for i in range(isize - 1):
        minIndex = i

        for j in range(i + 1, isize):
            if array[j] < array[minIndex]:
                minIndex = j

        if minIndex != i:
            array[i], array[minIndex] = array[minIndex], array[i]

        for k in range(isize):
            print(array[k], end="    ")
        print()

    print("\n== Estos son tus valores ordenados == \n")

    for i in range(isize):
        print(array[i], end="    ")
    print("\n")


def control(array, ope):
    if ope == "i":
        ansx = int(input("\nIngrese el valor que desea introducir: "))
        for i in range(len(array)):
            if array[i] == -345889306:
                array[i] = ansx
                return
    elif ope == "e":
        for i in range(len(array)):
            if array[i] != -345889306:
                array[i] = -345889306
                return
    elif ope == "b":
        ansx = int(input("\nIngrese un valor para buscar: "))
        for i in range(len(array)):
            if array[i] == ansx:
                print("\nEl valor esta en la posicion (primera coincidencia)", i)
                return
        print("\nEl valor no se encontro en la lista")
    elif ope == "t":
        for i in range(len(array)):
            if array[0] == -345889306:
                print("\nLa lista esta vacia")
                return
            if array[i] != -345889306:
                print("\nEl tamano de la lista es", i + 1)
                return
    elif ope == "a":
        ansx = int(input("\nIngrese una posicion para obtener el valor: "))
        if array[ansx] != -345889306:
            print("\nEl valor en la posicion", ansx, "es:", array[ansx])
        else:
            print("\nEl valor en la posicion", ansx, "esta vacio")
    elif ope == "u":
        bubbleSort(array)
    elif ope == "n":
        insertionSort(array)
    elif ope == "l":
        selectionSort(array)


x = 10000

lista = [-345889306] * x

if True:
    lista[0] = 50
    lista[1] = 23
    lista[2] = -23
    lista[3] = 0
    lista[4] = 10
    lista[5] = -5
    lista[6] = 7
    lista[7] = 42
    lista[8] = -10
    lista[9] = 15
    lista[10] = 33
    lista[11] = -8
    lista[12] = 27

while True:
    print("Introduzca la operacion a realizar\n")
    print("i | insertar valor")
    print("e | eliminar valor")
    print("b | buscar valor")
    print("t | obtener tamano de la lista")
    print("a | acceder a un valor en una posicion\n")
    print("u | aplicar bubble sort")
    print("n | aplicar insertion sort")
    print("l | aplicar selection sort")

    ansx = input()

    control(lista, ansx)
