def solution(array, commands)
    answer = []
    
    commands.each do |command|
        i,j,k = command
        answer.push (((array)[(i-1)...j]).sort)[k-1]
    end
    
    return answer
end