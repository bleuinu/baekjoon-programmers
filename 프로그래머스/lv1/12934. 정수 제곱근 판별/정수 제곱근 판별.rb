def solution(n)
    x = Math.sqrt(n).to_i
    return (x+1)*(x+1) if x*x == n
    -1
end