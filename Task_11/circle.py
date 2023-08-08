import math


class Circle():
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        print(
            f"The Area of This Circle = { pow(self.radius , 2)  * math.pi  }")

    def perimeter(self):
        print(
            f"The Perimeter  of This Circle = { self.radius * 2  * math.pi }")


r = float(input("Enter The Radius of The Circle: "))


c1 = Circle(r)
c1.area()
c1.perimeter()
