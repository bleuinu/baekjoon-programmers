def solution(n)
    n.to_s.reverse.split('').map(&:to_i)
end