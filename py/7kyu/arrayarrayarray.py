def explode(x):
    a, b = x

    is_a_num = isinstance(a, (int, float))
    is_b_num = isinstance(b, (int, float))

    if is_a_num and is_b_num:
        score = a + b
    elif is_a_num:
        score = a
    elif is_b_num:
        score = b
    else:
        return "Void!"

    return [x[:] for _ in range(int(score))]