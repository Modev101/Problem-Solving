def to_jaden_case(string):
    result = ""
    for word in string.split():
        result += word.capitalize() + " "
    return result
