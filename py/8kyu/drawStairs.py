def draw_stairs(n):
    result = ""
    for i in range(n):
        result += " " * i + "I\n"
    return result.rstrip("\n")