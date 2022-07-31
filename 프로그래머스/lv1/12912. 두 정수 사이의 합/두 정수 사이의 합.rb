def solution(a, b)
    a,b = [[a,b].min, [a,b].max]
    answer = 0
    a.upto(b) {|x| answer+=x }
    return answer
end