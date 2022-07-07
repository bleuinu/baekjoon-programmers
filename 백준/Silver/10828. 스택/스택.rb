x = gets.to_i
arr = []
x.times do 
	order = gets.chomp
	if order[0] == 'p'
		if order[1] == 'u'
			data = order.split(' ')[1].to_i
			arr.push(data) 
		else
			if arr.size == 0 then puts -1 else  puts arr.pop end
		end
	elsif order[0] == 't'
		if arr.size > 0 then puts arr[-1] else puts -1 end
	elsif order[0] == 's'
		puts arr.size
	elsif order[0] == 'e'
		if arr.size==0 then puts 1 else puts 0 end
	end
end