grade = gets.chomp
if grade == 'F' 
    puts '0.0'
else
    avg = ('A'.ord - grade[0].ord)+4.0
    if grade[1] == '+' 
        avg+=0.3
    elsif grade[1] == '-'
        avg-=0.3 
    end
    puts avg
end