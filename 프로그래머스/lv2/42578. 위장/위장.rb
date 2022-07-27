def solution(clothes)
    closet = Hash.new(0)

    clothes.each { |cloth| 
        closet[cloth[1]] += 1
    }
    
    combination = 1
    closet.each { |key, value|
        combination *= (value+1)
    }
    
    combination - 1
end