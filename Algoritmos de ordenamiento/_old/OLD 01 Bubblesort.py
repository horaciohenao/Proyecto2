# Importar los headers necesarios
import os

# Titulo para el cmd
os.system("title Algoritmos de ordenamientos de datos en Python / Bubblesort&& cls")

# Variables
burbuja = [0] * 10
cache = 0
char = 'n'

# Ingresar valores
print("== Ingrese 10 valores... ==")
for x in burbuja:
    cache += 1
    burbuja[cache-1] = int(input("Valor " +  str(cache) + ": "))

# Valores de ejemplo, comentar este o el codigo anterior solamente
# burbuja = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]

print("\n== Estos son tus valores ==\n")

print(str(burbuja) + "\n")

updates = input("Desea ver las actualizaciones del array? (S/N)\n")

print("\n== Ordenando... ====")

# Recorre el array
for a in range(10):

    # Recorre el array burbuja menos el ultimo elemento
    for b in range(len(burbuja)-1):

        # Si el elemento siguiente es menor que el elemento actual entonces
        if burbuja[b+1] < burbuja[b]:
            # Guardar el elemento actual en una variable 
            cache = burbuja[b+1]
            # Reemplazar el elemento actual por el siguiente
            burbuja[b+1] = burbuja[b]
            # Reemplazar el siguiente elemento por el elemento actual guardado en cache
            burbuja[b] = cache
        # Si updates es 'S' o 's', imprimir el array burbuja después de cada intercambio
        if updates == 'S' or updates == 's':
            print(burbuja)

print("\nEstos son tus valores ordenados ==\n")

#  Imprime los valores ordenados
print(str(burbuja) + "\n")

# "Presione una tecla para continuar"
os.system("pause")
os.system("cls")

"""
https://www.w3schools.com/python/python_arrays.asp
https://www.w3schools.com/python/python_user_input.asp
https://www.w3schools.com/python/python_for_loops.asp
https://www.geeksforgeeks.org/python-initialize-empty-array-of-given-length/
https://www.freecodecamp.org/news/int-object-is-not-iterable-python-error-solved/
"""