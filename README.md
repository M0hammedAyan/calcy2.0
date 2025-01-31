class Calculation1:  
    def Summation(self, a, b):  
        return a + b;  
  
class Calculation2:
    def Subtraction(self, a, b):
        return a - b;
  
class Calculation3:  
    def Multiplication(self, a, b):  
        return a * b;  
  
class Calculation4:  
    def Divide(self, a, b):  
        if b != 0:
            return a / b
        else:
            return "Cannot divide by zero."
  
class Derived(Calculation1, Calculation2, Calculation3, Calculation4):
    pass
  
d = Derived()
a = float(input("Enter the value of a: "))
b = float(input("Enter the value of b: "))

while True:
  
    print('''\n1. Summation - 1
2. Subtraction - 2
3. Multiplication - 3
4. Division - 4
5. Exit - 5
Enter new value - N''')
    
    i = input("Select your choice: ")
    
    if i == '1':
        print(f"Result: {d.Summation(a, b)}")
    elif i == '2':
        print(f"Result: {d.Subtraction(a, b)}")
    elif i == '3':
        print(f"Result: {d.Multiplication(a, b)}")
    elif i == '4':
        print(f"Result: {d.Divide(a, b)}")
    elif i == 'N':
        a = float(input("Enter new value for a: "))
        b = float(input("Enter new value for b: "))
    elif i == '5':
        print("Thank You!\nExiting the process.")
        break
    else:
        print("Invalid choice!😅 Please select again.")
