function solution(A, B) {
    return A.map( (row) => {
       return B[0].map( (x,y) => {
            return row.reduce( (a,b,c) => a + b * B[c][y] , 0)
        })
    })
}