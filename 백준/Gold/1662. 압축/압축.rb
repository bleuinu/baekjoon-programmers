apchuk = gets.chomp

stack = []

# 3 1

apchuk.each_char { |c| 
	length = 0
    if c == ')'
        while stack.last != '('
			if stack.last.class == Integer
				length += stack.last
			else	
				length += 1
			end
			stack.pop
        end 
        stack.pop

        rep = stack.pop.to_i
        length *= rep

        stack.push(length)

    else
        stack.push(c)
    end
}

cnt = (stack.reject{|x| x.class == String}).sum
stack = stack.reject{|x| x.class == Integer}
if cnt.class == Integer
	puts stack.size + cnt
else
	puts stack.size
end