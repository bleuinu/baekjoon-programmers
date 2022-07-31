def gcd(a, b)
    if a == 0 then return b end
    return gcd(b % a, a);
end
    
def lcm(a, b)
    return a*b / gcd(a,b) 
end
    
def solution(n, m)
    [gcd(n,m), lcm(n,m)]
end