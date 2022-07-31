def solution(arr)
    arr = arr.filter{|x| x!=arr.min}
    return [-1] if arr.empty? 
    arr
end