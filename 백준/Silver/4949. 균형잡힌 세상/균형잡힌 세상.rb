def balance?(str) 
	stack = []
	
	str.each_char { |c|
		if c=='(' or c=='[' then stack.push(c) end 
		if c==')'
			if(stack.empty? or stack[-1] == '[')
				return "no"
			else
				stack.pop
			end
		elsif c==']'
			if(stack.empty? or stack[-1] == '(')
				return "no"
			else 
				stack.pop
			end
		end
	}

	if stack.empty? then return "yes" else "no" end
end

loop {
	str = gets.chomp 
	if str=='.' then break end
	puts balance?(str)
}