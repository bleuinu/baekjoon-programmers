str = gets.chomp
bomb = gets.chomp

i = 0
SIZE = bomb.size
stack = []
str.size.times {
    stack.push(str[i])
    j = SIZE - 1
    
    if str[i] == bomb[j]
        j-=1
        check = false 
        size = stack.size - bomb.size
        
        k = stack.size - 2
        while k >= size do
            if stack[k] == bomb[j]
                check = true 
                j-=1
                k-=1
            else 
                check = false 
                break
            end
        end
        
        if SIZE == 1 then check = true end
        if check 
            bomb.size.times { stack.pop }
        end 
    end 
    i += 1
}

puts (if stack.empty? then "FRULA" else stack.join end)