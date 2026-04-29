def _all(seq, fun): 
    for se in seq:
        if not fun(se):
            return False
    return True

