n = gets.to_i
stack = []
res = []

n.times {
    str = gets.chomp
    if str == "READ"
        res.push(stack.pop)
    else
        stack.push(str)
    end
}

puts res