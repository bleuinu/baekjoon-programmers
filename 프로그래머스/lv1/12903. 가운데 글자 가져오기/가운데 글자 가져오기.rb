def solution(s)
    size = s.size
    return s[size/2] if size.odd?
    return s[size/2-1]+s[size/2] if size.even?
end