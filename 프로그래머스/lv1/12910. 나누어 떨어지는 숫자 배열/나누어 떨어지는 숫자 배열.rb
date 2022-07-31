def solution(arr, divisor)
    arr = arr.filter{|x| x%divisor==0 }
    return [-1] if arr.empty?
    arr.sort
end