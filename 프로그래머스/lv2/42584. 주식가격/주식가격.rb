def solution(prices)
    answer = []
    0.upto(prices.size-1) { |i| 
        cnt = 0
        (i+1).upto(prices.size-1) { |j|
            if prices[i] <= prices[j]
                cnt += 1
            else
                cnt += 1
                break
            end
        }
        answer.push cnt
    }
    answer
end