import math


def sum_and_multiply(S, P):
    D = S * S - 4 * P

    if D < 0:
        return None

    sqrt_D = int(math.isqrt(D))

    if sqrt_D * sqrt_D != D:
        return None

    x = (S + sqrt_D) // 2
    y = (S - sqrt_D) // 2

    if x + y == S and x * y == P and 0 <= x <= 1000 and 0 <= y <= 1000:
        return sorted([x, y])

    return None
