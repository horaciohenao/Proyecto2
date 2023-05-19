class Node
    attr_accessor :data, :left, :right
  
    def initialize(value)
      @data = value
      @left = nil
      @right = nil
    end
  end
  
  def create_node(value)
    Node.new(value)
  end
  
  def insert_node(root, value)
    return create_node(value) if root.nil?
  
    if value < root.data
      root.left = insert_node(root.left, value)
    else
      root.right = insert_node(root.right, value)
    end
  
    root
  end
  
  def in_order_traversal(root, array, index)
    return if root.nil?
  
    in_order_traversal(root.left, array, index)
    array[index[0]] = root.data
    index[0] += 1
    in_order_traversal(root.right, array, index)
  end
  
  def binary_tree_sort(array)
    size = array.size
    root = nil
  
    array.each do |value|
      root = insert_node(root, value)
    end
  
    index = [0]
    in_order_traversal(root, array, index)
  end
  
  array = [2, 3, 1, 923, -23, 9128, 0, 10, 20, 12]
  
  puts "\n== Estos son tus valores == \n\n"
  puts array.join("\t")
  puts
  
  puts "\n\n== Ordenando... ==\n\n"
  
  binary_tree_sort(array)
  
  puts "\n== Estos son tus valores ordenados ==\n\n"
  puts array.join("\t")
  puts
  