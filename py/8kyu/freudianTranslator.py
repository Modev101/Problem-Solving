def to_freud(sentence):
    result = ""
    if sentence == "":
        return ""
    for word in sentence.split():
        result += " " + "sex"
    return result.strip()