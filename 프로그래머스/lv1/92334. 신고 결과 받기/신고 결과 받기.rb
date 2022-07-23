def solution(id_list, report, k)
    gotReported = {}
    whoReported = {}
    id_list.each { |id| gotReported[id] = 0; whoReported[id] = []}

    report.each { |str|
        src, dest = str.split(' ')
        if whoReported[src].include? dest then next end
            
        gotReported[dest] += 1
        whoReported[src].push dest
    }

    answer = []
    id_list.each { |id|
        if whoReported[id].empty? 
            answer.push(0)
        else
            cnt = 0
            whoReported[id].each { |user|
                if gotReported[user] >= k
                    cnt += 1
                end
            }
            answer.push(cnt)
        end
    }

    answer
end
