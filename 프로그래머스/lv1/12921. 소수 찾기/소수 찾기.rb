def prime?(n)
    if n < 2 then return false end
    if n <= 3 then return true end
    
    if (n % 2 == 0) or (n % 3 == 0) then return false end
    
    i = 5
    while (i*i) <= n
        if (n % i == 0) or (n % (i+2) == 0) then return false end
        i += 6
    end
    
    true
end
        
def solution(n)
    cnt = 0
    for i in (1..n)
        if prime? i then cnt +=1 end
    end
    cnt
end