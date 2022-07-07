n, m = gets.split.map(&:to_i)
p = true 

m.times {
	n = gets
	stk = gets.split.map(&:to_i)
	i = 0

	(stk.size-1).times do 
		if stk[i] < stk[i+1] 
			p = false
			break
		end 
		i += 1
	end 
	
	if !p then break end 
}

puts (if p then "Yes" else "No" end
)