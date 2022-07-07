n = gets.to_i
expr = gets.chomp
val = [nil]*n

i = 0
n.times { 
    val[i] = gets.to_i
    i += 1
}

stack = []
expr.each_char { |c| 
    if c >= 'A' and c <= 'Z'
        stack.push(val[c.ord - 'A'.ord])
    else
        a = stack.pop
        b = stack.pop
        if c == '+'
            stack.push(a+b)
        elsif c == '-'
            stack.push(b-a)
        elsif c == '*'
            stack.push(a*b)
        elsif c == '/'
            stack.push(b/a.to_f)
        end
    end
}
puts '%.2f' % stack.pop