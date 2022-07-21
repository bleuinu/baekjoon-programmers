def solution(lottos, win_nums)
    prize = [6,6,5,4,3,2,1]
    
    cnt = 0
    lottos.each { |x|
        if win_nums.include? x then cnt += 1 end
    }
        
    [prize[cnt+lottos.count(0)], prize[cnt]]
end