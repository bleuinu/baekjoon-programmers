n = gets.to_i
pattern = gets.chomp

(n-1).times do 
	file = gets.chomp
	file.each_char.with_index do |ch, i|
		if pattern[i] != file[i]
			pattern[i] = "?"
		end
	end
end 
puts pattern