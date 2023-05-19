def bucket_sort(array)
    num_buckets = 10
    buckets = Array.new(num_buckets) { [] }
  
    array.each do |value|
      bucket_index = (value * num_buckets) / 100
      buckets[bucket_index].push(value)
      puts array.join("\t")
    end
  
    buckets.each do |bucket|
      bucket.sort!
      puts array.join("\t")
    end
  
    index = 0
    buckets.each do |bucket|
      bucket.each do |value|
        array[index] = value
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
  
  bucket_sort(array)
  
  puts "\n== Estos son tus valores ordenados ==\n\n"
  puts array.join("\t")
  puts
  