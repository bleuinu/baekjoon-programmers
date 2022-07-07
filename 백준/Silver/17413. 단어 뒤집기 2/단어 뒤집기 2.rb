str = gets.chomp
stack = []
temp = ''
ans = ""

str.each_char { |c| 
    if c == '<'
        ans += temp.reverse
        temp = ""
        ans += c
        stack.push(c)
    elsif c == '>'
        ans += c
        stack.pop
    elsif !stack.empty?
        ans += c
        next
    elsif c == ' '
        ans += temp.reverse
        ans += " "
        temp = ""
    else 
        temp += c
    end
}

puts ans+temp.reverse