def prec(c)
    if c == '*' or c == '/' 
        return 2
    elsif c == '+' or c == '-'
        return 1
    else 
        return -1
    end
end 

expr = gets.chomp
stack = []
postfix = ""

expr.each_char { |c| 
    if c>='A' and c<='Z'
        postfix += c
    elsif c == '('
        stack.push(c)
    elsif c == ')'
        while stack.last != '(' 
            postfix += stack.pop
        end
        stack.pop
    else
        while !stack.empty? and (prec(c) <= prec(stack.last))
            postfix += stack.pop
        end
        stack.push(c)
    end
}

while !stack.empty? 
    postfix += stack.pop 
end

puts postfix 