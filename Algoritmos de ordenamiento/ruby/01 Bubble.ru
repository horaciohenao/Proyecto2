def bubble_sort(array)
    size = array.size
  
    for i in 0...size
      for j in 0...(size - i - 1)
        if array[j + 1] < array[j]
          cache = array[j + 1]
          array[j + 1] = array[j]
          array[j] = cache
        end
        puts array.join("\t")
        puts
      end
    end
  
    array
  end
  
  array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]
  
  puts "\n== Estos son tus valores == \n\n"
  puts array.join("\t")
  puts
  
  puts "\n\n== Ordenando... ==\n\n"
  bubble_sort(array)
  
  puts "\n== Estos son tus valores ordenados ==\n\n"
  puts array.join("\t")
  puts
  