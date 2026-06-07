# Python | Guido van Rossum (1991) | High-level language used for automation, web development, AI, machine learning, data science and scripting.

def add(a,b):
    return a+b

def factorial(n):
    if n<=1:
        return 1
    return n*factorial(n-1)

square=lambda x:x*x

class Person:
    def __init__(self,name,age):
        self._name=name
        self._age=age

    def get_name(self):
        return self._name

    def set_name(self,name):
        self._name=name

    def display(self):
        print("Name:",self._name)
        print("Age:",self._age)

class Animal:
    def sound(self):
        print("Animal Sound")

class Dog(Animal):
    def sound(self):
        print("Bark")

print("=== OUTPUT ===")
print("Hello, Python!")

print("\n=== INPUT ===")
age=int(input("Enter age: "))

print("\n=== VARIABLES AND DATA TYPES ===")

num=10
price=99.99
pi=3.1415926535
grade='A'
is_student=True
name="Alice"

print(num)
print(price)
print(pi)
print(grade)
print(is_student)
print(name)

print("\n=== TYPE CONVERSION ===")

result=float(num)/3
print(result)

print("\n=== OPERATORS ===")

a=10
b=3

print(a+b)
print(a-b)
print(a*b)
print(a/b)
print(a//b)
print(a%b)
print(a**b)

print(a==b)
print(a!=b)
print(a>b)

print(a>5 and b>1)
print(a>20 or b>1)
print(not(a>b))

print(a&b)
print(a|b)

print("\n=== LIST ===")

numbers=[10,20,30,40,50]

print(numbers)
print(numbers[0])

numbers.append(60)

for n in numbers:
    print(n,end=" ")

print()

print("\n=== TUPLE ===")

coordinates=(10,20)

print(coordinates)
print(coordinates[0])

print("\n=== SET ===")

unique_numbers={10,20,20,30,40}

print(unique_numbers)

unique_numbers.add(50)

print(unique_numbers)

print("\n=== DICTIONARY ===")

marks={
    "Math":95,
    "Science":90
}

print(marks)
print(marks["Math"])

marks["English"]=88

print(marks)

print("\n=== STRING ===")

city="Hyderabad"

print(city)
print(len(city))
print(city.upper())
print(city.lower())
print(city.replace("Hyder","Cyber"))

print("\n=== LIST COMPREHENSION ===")

squares=[x*x for x in range(1,6)]

print(squares)

print("\n=== IF ELSE ===")

if age>=18:
    print("Adult")
else:
    print("Minor")

print("\n=== IF ELIF ELSE ===")

score=85

if score>=90:
    print("A+")
elif score>=75:
    print("A")
elif score>=60:
    print("B")
else:
    print("C")

print("\n=== MATCH CASE ===")

day=3

match day:
    case 1:
        print("Monday")
    case 2:
        print("Tuesday")
    case 3:
        print("Wednesday")
    case _:
        print("Other Day")

print("\n=== FOR LOOP ===")

for i in range(1,6):
    print(i,end=" ")

print()

print("\n=== WHILE LOOP ===")

i=1

while i<=5:
    print(i,end=" ")
    i+=1

print()

print("\n=== DO WHILE EQUIVALENT ===")

j=1

while True:
    print(j,end=" ")
    j+=1

    if j>5:
        break

print()

print("\n=== BREAK ===")

for k in range(1,11):
    if k==6:
        break
    print(k,end=" ")

print()

print("\n=== CONTINUE ===")

for k in range(1,11):
    if k==6:
        continue
    print(k,end=" ")

print()

print("\n=== PASS ===")

for k in range(1,4):
    if k==2:
        pass
    print(k)

print("\n=== FUNCTIONS ===")

print(add(10,20))

print("\n=== RECURSION ===")

print(factorial(5))

print("\n=== LAMBDA ===")

print(square(5))

print("\n=== MODULE ===")

import math

print(math.sqrt(25))
print(math.pi)

print("\n=== CLASSES AND OBJECTS ===")

p=Person("Bob",21)

p.display()

print("\n=== ENCAPSULATION ===")

p.set_name("Tom")

print(p.get_name())

print("\n=== INHERITANCE ===")

dog=Dog()

dog.sound()

print("\n=== POLYMORPHISM ===")

animal=Dog()

animal.sound()

print("\n=== COMPLETE ===")

print("Python Basics Demonstration Finished")