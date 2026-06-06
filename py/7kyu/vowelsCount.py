def get_count(sentence):
    vowels = 'aeiou'
    result = 0
    for i in vowels:
        for j in sentence:
            if i == j:
                result += 1
    return result