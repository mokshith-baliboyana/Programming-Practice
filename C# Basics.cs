// C# | Anders Hejlsberg (2000) | Object-oriented language developed by Microsoft for desktop applications, web applications, cloud services, games and enterprise software.

using System;
using System.Collections.Generic;

interface IPlayable{
    void Play();
}

abstract class Shape{
    public abstract double Area();
}

class Circle:Shape{
    public double Radius;

    public Circle(double radius){
        Radius=radius;
    }

    public override double Area(){
        return Math.PI*Radius*Radius;
    }
}

class Person{
    private string name;
    private int age;

    public Person(string name,int age){
        this.name=name;
        this.age=age;
    }

    public string GetName(){
        return name;
    }

    public void SetName(string name){
        this.name=name;
    }

    public void Display(){
        Console.WriteLine("Name: "+name);
        Console.WriteLine("Age: "+age);
    }
}

class Animal{
    public virtual void Sound(){
        Console.WriteLine("Animal Sound");
    }
}

class Dog:Animal,IPlayable{
    public override void Sound(){
        Console.WriteLine("Bark");
    }

    public void Play(){
        Console.WriteLine("Dog is Playing");
    }
}

class Program{

    static int Add(int a,int b){
        return a+b;
    }

    static int Factorial(int n){
        if(n<=1){
            return 1;
        }
        return n*Factorial(n-1);
    }

    static void Main(){

        Console.WriteLine("=== OUTPUT ===");
        Console.WriteLine("Hello, C#!");

        Console.WriteLine("\n=== INPUT ===");

        Console.Write("Enter age: ");
        int age=int.Parse(Console.ReadLine());

        Console.WriteLine("\n=== VARIABLES AND DATA TYPES ===");

        byte b=100;
        short s=1000;
        int num=10;
        long population=8000000000;

        float price=99.99f;
        double pi=3.1415926535;
        decimal amount=999.99m;

        char grade='A';
        bool isStudent=true;

        string name="Alice";

        Console.WriteLine(b);
        Console.WriteLine(s);
        Console.WriteLine(num);
        Console.WriteLine(population);
        Console.WriteLine(price);
        Console.WriteLine(pi);
        Console.WriteLine(amount);
        Console.WriteLine(grade);
        Console.WriteLine(isStudent);
        Console.WriteLine(name);

        Console.WriteLine("\n=== TYPE CONVERSION ===");

        double result=(double)num/3;

        Console.WriteLine(result);
        Console.WriteLine(Convert.ToInt32("123"));
        Console.WriteLine(Convert.ToDouble("12.5"));

        Console.WriteLine("\n=== OPERATORS ===");

        int x=10;
        int y=3;

        Console.WriteLine(x+y);
        Console.WriteLine(x-y);
        Console.WriteLine(x*y);
        Console.WriteLine(x/y);
        Console.WriteLine(x%y);

        Console.WriteLine(x==y);
        Console.WriteLine(x!=y);
        Console.WriteLine(x>y);

        Console.WriteLine(x>5 && y>1);
        Console.WriteLine(x>20 || y>1);
        Console.WriteLine(!(x<y));

        Console.WriteLine(x&y);
        Console.WriteLine(x|y);

        Console.WriteLine("\n=== ARRAY ===");

        int[] numbers={10,20,30,40,50};

        foreach(int n in numbers){
            Console.Write(n+" ");
        }

        Console.WriteLine();

        Console.WriteLine("\n=== STRING ===");

        string city="Hyderabad";

        Console.WriteLine(city);
        Console.WriteLine(city.Length);
        Console.WriteLine(city.ToUpper());
        Console.WriteLine(city.ToLower());

        Console.WriteLine("\n=== LIST ===");

        List<string> fruits=new List<string>();

        fruits.Add("Apple");
        fruits.Add("Mango");
        fruits.Add("Banana");

        foreach(string fruit in fruits){
            Console.WriteLine(fruit);
        }

        Console.WriteLine("\n=== HASHSET ===");

        HashSet<int> set=new HashSet<int>();

        set.Add(10);
        set.Add(20);
        set.Add(20);
        set.Add(30);

        foreach(int value in set){
            Console.Write(value+" ");
        }

        Console.WriteLine();

        Console.WriteLine("\n=== DICTIONARY ===");

        Dictionary<string,int> marks=new Dictionary<string,int>();

        marks["Math"]=95;
        marks["Science"]=90;

        Console.WriteLine(marks["Math"]);
        Console.WriteLine(marks["Science"]);

        Console.WriteLine("\n=== IF ELSE ===");

        if(age>=18){
            Console.WriteLine("Adult");
        }else{
            Console.WriteLine("Minor");
        }

        Console.WriteLine("\n=== IF ELSE IF ===");

        int score=85;

        if(score>=90){
            Console.WriteLine("A+");
        }else if(score>=75){
            Console.WriteLine("A");
        }else if(score>=60){
            Console.WriteLine("B");
        }else{
            Console.WriteLine("C");
        }

        Console.WriteLine("\n=== SWITCH CASE ===");

        int day=3;

        switch(day){
            case 1:
                Console.WriteLine("Monday");
                break;
            case 2:
                Console.WriteLine("Tuesday");
                break;
            case 3:
                Console.WriteLine("Wednesday");
                break;
            default:
                Console.WriteLine("Other Day");
                break;
        }

        Console.WriteLine("\n=== FOR LOOP ===");

        for(int i=1;i<=5;i++){
            Console.Write(i+" ");
        }

        Console.WriteLine();

        Console.WriteLine("\n=== WHILE LOOP ===");

        int a=1;

        while(a<=5){
            Console.Write(a+" ");
            a++;
        }

        Console.WriteLine();

        Console.WriteLine("\n=== DO WHILE LOOP ===");

        int c=1;

        do{
            Console.Write(c+" ");
            c++;
        }while(c<=5);

        Console.WriteLine();

        Console.WriteLine("\n=== BREAK ===");

        for(int k=1;k<=10;k++){
            if(k==6){
                break;
            }
            Console.Write(k+" ");
        }

        Console.WriteLine();

        Console.WriteLine("\n=== CONTINUE ===");

        for(int k=1;k<=10;k++){
            if(k==6){
                continue;
            }
            Console.Write(k+" ");
        }

        Console.WriteLine();

        Console.WriteLine("\n=== FUNCTIONS ===");

        Console.WriteLine(Add(10,20));

        Console.WriteLine("\n=== RECURSION ===");

        Console.WriteLine(Factorial(5));

        Console.WriteLine("\n=== CLASSES AND OBJECTS ===");

        Person p=new Person("Bob",21);

        p.Display();

        Console.WriteLine("\n=== ENCAPSULATION ===");

        p.SetName("Tom");

        Console.WriteLine(p.GetName());

        Console.WriteLine("\n=== INHERITANCE ===");

        Dog dog=new Dog();

        dog.Sound();

        Console.WriteLine("\n=== POLYMORPHISM ===");

        Animal animal=new Dog();

        animal.Sound();

        Console.WriteLine("\n=== INTERFACE ===");

        dog.Play();

        Console.WriteLine("\n=== ABSTRACT CLASS ===");

        Shape circle=new Circle(5);

        Console.WriteLine(circle.Area());

        Console.WriteLine("\n=== COMPLETE ===");

        Console.WriteLine("C# Basics Demonstration Finished");
    }
}