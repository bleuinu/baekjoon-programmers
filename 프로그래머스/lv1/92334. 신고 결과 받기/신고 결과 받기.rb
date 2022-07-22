def solution(id_list, report, k)
    gotReported = {}
    whoReported = {}
    id_list.each { |id| gotReported[id] = 0; whoReported[id] = nil}

    report.each { |str|
        src, dest = str.split(' ')
        if whoReported[src] == nil
            whoReported[src] = [dest]
            gotReported[dest] += 1
        elsif whoReported[src].include? dest
            next
        else
            whoReported[src].push dest
            gotReported[dest] += 1
        end
    }

    answer = []
    id_list.each { |id|
        if whoReported[id] == nil 
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