def solution(citations)
    citations = citations.sort.reverse
    citations.each.with_index { |x,i| 
        if x <= i
            return i
        end
    }
    
    citations.size
end