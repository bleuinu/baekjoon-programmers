def prime?(n)
    return false if n < 2
    return true if n <= 3
    
    return false if (n % 2 == 0) or (n % 3 == 0)
    
    i = 5
    while (i*i) <= n
        return false if (n % i == 0) or (n % (i+2) == 0)
        i += 6
    end
    
    true
end

def solution(numbers)
    hash = {}
    1.upto(numbers.size) do |i|
        a = numbers.split('').permutation(i).to_a.uniq
        a.each { |x| hash[x.join.to_i] = 1 }
    end
    
    cnt = 0
    hash.each { |k,v| cnt += 1 if prime?(k) }

    cnt
end