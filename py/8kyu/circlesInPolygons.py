import math

def circle_diameter(sides, side_length):
    diameter = side_length / math.tan(math.pi / sides)
    return round(diameter, 3)