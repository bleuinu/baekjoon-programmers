def solution(citations)
    citations = citations.sort.reverse
    cnt = 0
    citations.each.with_index { |x,i| 
        if x > i
            cnt += 1
        end
    }
    
    cnt
end