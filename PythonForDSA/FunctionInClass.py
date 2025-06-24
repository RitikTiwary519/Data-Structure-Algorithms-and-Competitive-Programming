class fun:
    def __init__(self, name):
        self.name = name

    def display(self):
        print(f"Hello, {self.name}!")

a = fun("Alice")
a.display()

# here internally python is passing self , where self performs the same role as this in C++
# so we when we make a function we must make sure that we have self as the first parameter, but when we call the function we don't pass self, python does it automatically


