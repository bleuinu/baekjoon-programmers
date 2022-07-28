def solution(arr1, arr2)
    ans = []
    0.upto(arr1.size-1) { |i|
        temp = []
        0.upto(arr2[0].size-1) { |j|
            var = 0
            0.upto(arr1[i].size-1) { |k| var += (arr1[i][k] * arr2[k][j]) }
            temp.push var
        }
        ans.push temp
    }
    ans
end