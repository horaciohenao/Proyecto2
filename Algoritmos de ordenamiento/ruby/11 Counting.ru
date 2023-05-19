def counting_sort(array)
    size = array.size
  
    min_value = array[0]
    max_value = array[0]
    array.each do |value|
      min_value = value if value < min_value
      max_value = value if value > max_value
    end
  
    range = max_value - min_value + 1
    count = Array.new(range, 0)
  
    array.each do |value|
      count[value - min_value] += 1
      puts array.join("\t")
    end
  
    index = 0
    range.times do |i|
      while count[i] > 0
        array[index] = i + min_value
        count[i] -= 1
        index += 1
        puts array.join("\t")
      end
    end
  end
  
  array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]
  
  puts "\n== Estos son tus valores == \n\n"
  puts array.join("\t")
  puts
  
  puts "\n\n== Ordenando... ==\n\n"
  
  counting_sort(array)
  
  puts "\n== Estos son tus valores ordenados ==\n\n"
  puts array.join("\t")
  puts
  