def solution(a, b)
    sum = 0
    a.each_with_index do |x, i|
        sum += (x * b[i])
    end
    
    sum
end