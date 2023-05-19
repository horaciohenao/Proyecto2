def pigeonhole_sort(array)
    size = array.size
  
    puts "\n== Estos son tus valores == \n\n"
    puts array.join("\t")
    puts
  
    puts "\n\n== Ordenando... ==\n\n"
  
    min_val = array.min
    max_val = array.max
    range = max_val - min_val + 1
    pigeonholes = Array.new(range, 0)
  
    array.each do |num|
      pigeonholes[num - min_val] += 1
    end
  
    index = 0
  
    (0...range).each do |i|
      while pigeonholes[i] > 0
        array[index] = i + min_val
        pigeonholes[i] -= 1
        index += 1
  
        puts array.join("\t")
        puts
      end
    end
  
    puts "\n== Estos son tus valores ordenados ==\n\n"
    puts array.join("\t")
    puts
  end
  
  array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]
  
  pigeonhole_sort(array)
  
  puts
  