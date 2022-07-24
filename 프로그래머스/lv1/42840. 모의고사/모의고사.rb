def solution(answers)
    s1 = [1, 2, 3, 4, 5]
    s2 = [2, 1, 2, 3, 2, 4, 2, 5]
    s3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    c1 = c2 = c3 = 0
    
    answers.each { |x|
        if s1.first == x then c1+=1 end
        if s2.first == x then c2+=1 end
        if s3.first == x then c3+=1 end
            
        s1.push(s1.shift)
        s2.push(s2.shift)
        s3.push(s3.shift)
    }

    answer = nil

    if c1 == c2 and c2 == c3
        answer = [1, 2, 3]
    elsif c1 == c2 and c1 > c3
        answer = [1, 2]
    elsif c2 == c3 and c2 > c1
        answer = [2, 3]
    elsif c1 == c3 and c1 > c2
        answer = [1, 3]
    elsif c1 > c2 and c1 > c3
        answer = [1]
    elsif c2 > c1 and c2 > c3
        answer = [2]
    elsif c3 > c1 and c3 > c2
        answer = [3]
    end
    return answer
end