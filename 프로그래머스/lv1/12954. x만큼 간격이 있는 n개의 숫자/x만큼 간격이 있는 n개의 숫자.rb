def solution(x, n)
    answer = [x]
    0.upto(n-2) { |i| answer.push(answer[i]+x) }
    return answer
end