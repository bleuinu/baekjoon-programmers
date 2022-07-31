def solution(n)
    arr = ["수", "박"]
    answer = ''
    n.times {|i| answer+=arr[i%2]}
    return answer
end