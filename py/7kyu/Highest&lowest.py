def high_and_low(numbers):
    nums = list(map(int, numbers.split()))
    return str(max(nums)) + " " + str(min(nums))