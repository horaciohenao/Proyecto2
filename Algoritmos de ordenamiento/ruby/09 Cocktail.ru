def cocktail_sort(array)
    size = array.size
    start = 0
    finish = size - 1
  
    while start < finish
      swapped = false
  
      for i in start...finish
        if array[i] > array[i + 1]
          array[i], array[i + 1] = array[i + 1], array[i]
          swapped = true
        end
      end
  
      break unless swapped
  
      finish -= 1
  
      for i in (start...finish).reverse_each
        if array[i] > array[i + 1]
          array[i], array[i + 1] = array[i + 1], array[i]
          swapped = true
        end
      end
  
      start += 1
  
      puts array.join("\t")
    end
  
    array
  end
  
  array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]
  
  puts "\n== Estos son tus valores == \n\n"
  puts array.join("\t")
  puts
  
  puts "\n\n== Ordenando... ==\n\n"
  
  cocktail_sort(array)
  
  puts "\n== Estos son tus valores ordenados ==\n\n"
  puts array.join("\t")
  puts
  