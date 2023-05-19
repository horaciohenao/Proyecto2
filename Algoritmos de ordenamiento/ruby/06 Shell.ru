def shell_sort(array)
    size = array.size
    gap = size / 2
  
    while gap > 0
      for i in gap...size
        j = i
        cache = array[i]
  
        while j >= gap && array[j - gap] > cache
          array[j] = array[j - gap]
          j -= gap
        end
  
        array[j] = cache
      end
  
      gap /= 2
  
      puts array.join("\t")
    end
  
    array
  end
  
  array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]
  
  puts "\n== Estos son tus valores == \n\n"
  puts array.join("\t")
  puts
  
  puts "\n\n== Ordenando... ==\n\n"
  
  shell_sort(array)
  
  puts "\n== Estos son tus valores ordenados ==\n\n"
  puts array.join("\t")
  puts
  