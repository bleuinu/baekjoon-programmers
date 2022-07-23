(gets.to_i).times do 
	ans = "YES"
	phonenum = []

	(gets.to_i).times do 
		phonenum.push(gets.chomp)
	end
	
	phonenum.sort!
	for i in (0...(phonenum.size-1)) do 
		if(phonenum[i].size == phonenum[i+1].size) 
			next
		else
			prefix = phonenum[i+1][0...(phonenum[i].size)]
			if phonenum[i] == prefix 
				ans = "NO"
				break
			end
		end
	end
	
	puts ans
end