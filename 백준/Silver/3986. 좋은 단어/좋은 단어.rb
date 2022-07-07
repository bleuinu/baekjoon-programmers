def good?(str) 
	if str.size.odd? then return 0 end 
	
	stack = [str[0]]
	str = str[1..]
	
	str.each_char {|c| 
		if stack[-1] != c then stack.push(c) else stack.pop end
	}
	
	if stack.empty? then return 1 else return 0 end
end

x = gets.to_i

cnt = 0
x.times {
	cnt += good?(gets.chomp)
}

puts cnt