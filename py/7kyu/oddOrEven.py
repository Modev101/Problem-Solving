def odd_or_even(arr):
    if not arr: return "even"
    return "even" if sum(arr) % 2 == 0 else "odd"