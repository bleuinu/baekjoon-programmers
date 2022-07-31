def solution(phone_number)
    size = phone_number.size
    return ('*'*(size-4))+phone_number[-4..]
end