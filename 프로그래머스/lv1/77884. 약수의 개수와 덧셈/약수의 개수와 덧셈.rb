require 'prime'

def divisor(n)
    arr = []
    i = 1
    while (i*i) <= n
        if n%i==0
            arr.push(i)
            arr.push(n/i) if n/i != i
        end
        i += 1
    end
    
    arr = arr.uniq
    arr.size
end

def solution(left, right)
    answer = 0
    
    left.upto(right) do |x|
        if Prime.prime?(x)
            answer += x
        else
            temp = divisor(x) 
            if temp.even?
                answer += x
            else
                answer -= x
            end
        end
    end
    
    return answer
end