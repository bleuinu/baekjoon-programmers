require 'prime'

def divisor(x)
    cnt = 0
    1.upto(x) do |i|
        cnt += 1 if x%i==0
    end
    
    cnt
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