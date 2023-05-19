def selection_sort(array)
    size = array.size
  
    for i in 0...size - 1
      min_index = i
  
      for j in i + 1...size
        min_index = j if array[j] < array[min_index]
      end
  
      if min_index != i
        cache = array[i]
        array[i] = array[min_index]
        array[min_index] = cache
      end
  
      puts array.join("\t")
      puts
    end
  
    array
  end
  
  array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]
  
  puts "\n== Estos son tus valores == \n\n"
  puts array.join("\t")
  puts
  
  puts "\n\n== Ordenando... ==\n\n"
  selection_sort(array)
  
  puts "\n== Estos son tus valores ordenados ==\n\n"
  puts array.join("\t")
  puts
  