x = gets.to_i
sum = []
x.times {
	z = gets.to_i
	sum.push(z)
	if z==0 then sum.pop; sum.pop end 
}
puts sum.sum
