def print_array(array)
  puts "\n[ " + array.map { |num| num == -345889306 ? "_" : num }.join(" ") + " ]\n"
end

def bubble_sort(array)
  isize = array.count { |num| num != -345889306 }
  
  puts "\n== Estos son tus valores == \n"
  print_array(array)
  
  puts "\n\n== Ordenando (BubbleSort)... ==\n"
  
  (isize - 1).times do |i|
    (isize - i - 1).times do |j|
      if array[j + 1] < array[j]
        array[j], array[j + 1] = array[j + 1], array[j]
      end
    end
    
    print_array(array)
  end
  
  puts "\n== Estos son tus valores ordenados == \n"
  print_array(array.first(isize))
end

def insertion_sort(array)
  cache = 0
  isize = 0
  
  puts "\n== Estos son tus valores == \n"
  
  array.each do |num|
    break if num == -345889306
    print "#{num}    "
    isize += 1
  end
  
  puts "\n\n== Ordenando (InsertionSort)... ==\n"
  
  (1...isize).each do |i|
    cache = array[i]
    j = i - 1
    
    while j >= 0 && array[j] > cache
      array[j + 1] = array[j]
      j -= 1
    end
    
    array[j + 1] = cache
    
    array.each { |num| print "#{num}    " }
    puts
  end
  
  puts "\n== Estos son tus valores ordenados == \n"
  
  array.first(isize).each { |num| print "#{num}    " }
  puts "\n"
end

def selection_sort(array)
  cache = 0
  isize = 0
  
  puts "\n== Estos son tus valores == \n"
  
  array.each do |num|
    break if num == -345889306
    print "#{num}    "
    isize += 1
  end
  
  puts "\n\n== Ordenando (SelectionSort)... ==\n"
  
  (isize - 1).times do |i|
    min_index = i
    
    (i + 1...isize).each do |j|
      if array[j] < array[min_index]
        min_index = j
      end
    end
    
    if min_index != i
      array[i], array[min_index] = array[min_index], array[i]
    end
    
    array.each { |num| print "#{num}    " }
    puts
  end
  
  puts "\n== Estos son tus valores ordenados == \n"
  
  array.first(isize).each { |num| print "#{num}    " }
  puts "\n"
end

def control(array, ope)
  if ope == 'i'
    puts "\nIngrese el valor que desea introducir: "
    ansx = gets.chomp.to_i
    array.each_with_index do |num, i|
      if num == -345889306
        array[i] = ansx
        return
      end
    end
  elsif ope == 'e'
    array.each_with_index do |num, i|
      if num != -345889306
        array[i] = -345889306
        return
      end
    end
  elsif ope == 'b'
    puts "\nIngrese un valor para buscar: "
    ansx = gets.chomp.to_i
    array.each_with_index do |num, i|
      if num == ansx
        puts "El valor esta en la posicion (primera coincidencia) #{i}"
        return
      end
    end
    puts "El valor no se encontro en la lista"
  elsif ope == 't'
    array.each_with_index do |num, i|
      if array[0] == -345889306
        puts "La lista esta vacia"
        return
      end
      if num != -345889306
        puts "El tamano de la lista es #{i + 1}"
        return
      end
    end
  elsif ope == 'a'
    puts "\nIngrese una posicion para obtener el valor: "
    ansx = gets.chomp.to_i
    if array[ansx] != -345889306
      puts "\nEl valor en la posicion #{ansx} es: #{array[ansx]}"
    else
      puts "\nEl valor en la posicion #{ansx} esta vacio"
    end
  elsif ope == 'u'
    bubble_sort(array)
  elsif ope == 'n'
    insertion_sort(array)
  elsif ope == 'l'
    selection_sort(array)
  end
end

x = 10000
lista = Array.new(x, -345889306)

if true
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
end

while true
  puts "Introduzca la operacion a realizar"
  puts "i | insertar valor"
  puts "e | eliminar valor"
  puts "b | buscar valor"
  puts "t | obtener tamano de la lista"
  puts "a | acceder a un valor en una posicion\n"
  puts "u | aplicar bubble sort"
  puts "n | aplicar insertion sort"
  puts "l | aplicar selection sort"

  ansx = gets.chomp

  control(lista, ansx)
end
