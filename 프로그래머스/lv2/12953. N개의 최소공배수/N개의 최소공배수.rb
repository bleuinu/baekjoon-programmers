def gcd(a, b)
    if a == 0 then return b end
    return gcd(b % a, a);
end
    
def lcm(a, b)
    return a*b / gcd(a,b) 
end
    
def solution(arr) 
    ans = arr[0]
    for i in (1..arr.size-1)
       ans = lcm(arr[i], ans)
    end
    ans
end