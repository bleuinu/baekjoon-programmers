x = gets.to_i

def vps?(str) 
	stack = []
	if str.size & 1 == 1 or str[0] == ')'
		return "NO"
	end
	str.each_char { |c|
		if c == '(' 
			stack.push(c)
		else
			if stack.empty? then return "NO" end 
			stack.pop
		end
	}
	if stack.empty? then "YES" else "NO" end
end 

x.times do 
	puts vps?(gets.chomp)
end
