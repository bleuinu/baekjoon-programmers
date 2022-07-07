loop {
    str = gets.chomp 
    if str == '#' then break end 
    
    stack = []
    res = "Legal"
    str.each_char { |c| 
        if c == '(' or c == '{' or c == '['
            stack.push(c)
        elsif c == ')' and (stack.empty? or stack.last != '(')
            res = "Illegal"
        elsif c == '}' and (stack.empty? or stack.last != '{')
            res = "Illegal"
        elsif c == ']' and (stack.empty? or stack.last != '[')
            res = "Illegal"
        elsif c == ')' and stack.last == '('
            stack.pop
        elsif c == '}' and stack.last == '{'
            stack.pop
        elsif c == ']' and stack.last == '['
            stack.pop
        end
    }
    
    if !stack.empty? then res = "Illegal" end 
    puts res
}