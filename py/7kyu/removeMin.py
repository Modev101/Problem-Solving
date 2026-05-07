def remove_smallest(numbers):
    if not numbers:return []
    newArr = numbers.copy()
    newArr.remove(min(newArr))  
    return newArr