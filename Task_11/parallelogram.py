import math


class parallelogram:
    def __init__(self, side1, side2, angle):
        self.side1 = side1
        self.side2 = side2
        self.angle = math.radians(angle)

    def area(self):
        return self.side1 * self.side2 * math.sin(self.angle)


side1 = float(input("Enter the first side of the parallelogram: "))
side2 = float(input("Enter the second side of the parallelogram: "))
angle = float(
    input("Enter the angle between the sides of the parallelogram: "))
print("The area of the parallelogram is",
      parallelogram(side1, side2, angle).area())
