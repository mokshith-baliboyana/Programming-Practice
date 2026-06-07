// Java | James Gosling (1995) | Object-oriented language used for enterprise applications, Android development, backend systems and large-scale software.

import java.util.ArrayList;
import java.util.HashSet;
import java.util.HashMap;
import java.util.Scanner;

interface Playable{
    void play();
}

abstract class Shape{
    abstract double area();
}

class Circle extends Shape{
    double radius;

    Circle(double radius){
        this.radius=radius;
    }

    double area(){
        return 3.14159*radius*radius;
    }
}

class Person{
    private String name;
    private int age;

    Person(String name,int age){
        this.name=name;
        this.age=age;
    }

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name=name;
    }

    public void display(){
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
    }
}

class Animal{
    void sound(){
        System.out.println("Animal Sound");
    }
}

class Dog extends Animal implements Playable{
    void sound(){
        System.out.println("Bark");
    }

    public void play(){
        System.out.println("Dog is Playing");
    }
}

public class Main{

    static int add(int a,int b){
        return a+b;
    }

    static int factorial(int n){
        if(n<=1){
            return 1;
        }
        return n*factorial(n-1);
    }

    public static void main(String[] args){

        Scanner sc=new Scanner(System.in);

        System.out.println("=== OUTPUT ===");
        System.out.println("Hello, Java!");

        System.out.println("\n=== INPUT ===");
        System.out.print("Enter age: ");
        int age=sc.nextInt();

        System.out.println("\n=== VARIABLES AND DATA TYPES ===");

        byte b=100;
        short s=1000;
        int num=10;
        long population=8000000000L;

        float price=99.99f;
        double pi=3.1415926535;

        char grade='A';
        boolean isStudent=true;

        String name="Alice";

        System.out.println(b);
        System.out.println(s);
        System.out.println(num);
        System.out.println(population);
        System.out.println(price);
        System.out.println(pi);
        System.out.println(grade);
        System.out.println(isStudent);
        System.out.println(name);

        System.out.println("\n=== TYPE CASTING ===");

        double result=(double)num/3;
        System.out.println(result);

        System.out.println("\n=== OPERATORS ===");

        int x=10,y=3;

        System.out.println(x+y);
        System.out.println(x-y);
        System.out.println(x*y);
        System.out.println(x/y);
        System.out.println(x%y);

        System.out.println(x==y);
        System.out.println(x!=y);
        System.out.println(x>y);

        System.out.println(x>5 && y>1);
        System.out.println(x>20 || y>1);

        System.out.println(x&y);
        System.out.println(x|y);

        System.out.println("\n=== ARRAY ===");

        int[] numbers={10,20,30,40,50};

        for(int n:numbers){
            System.out.print(n+" ");
        }
        System.out.println();

        System.out.println("\n=== STRING ===");

        String city="Hyderabad";

        System.out.println(city);
        System.out.println(city.length());
        System.out.println(city.toUpperCase());

        System.out.println("\n=== ARRAYLIST ===");

        ArrayList<String> fruits=new ArrayList<>();

        fruits.add("Apple");
        fruits.add("Mango");
        fruits.add("Banana");

        for(String fruit:fruits){
            System.out.println(fruit);
        }

        System.out.println("\n=== HASHSET ===");

        HashSet<Integer> set=new HashSet<>();

        set.add(10);
        set.add(20);
        set.add(20);
        set.add(30);

        System.out.println(set);

        System.out.println("\n=== HASHMAP ===");

        HashMap<String,Integer> marks=new HashMap<>();

        marks.put("Math",95);
        marks.put("Science",90);

        System.out.println(marks.get("Math"));
        System.out.println(marks.get("Science"));

        System.out.println("\n=== IF ELSE ===");

        if(age>=18){
            System.out.println("Adult");
        }else{
            System.out.println("Minor");
        }

        System.out.println("\n=== IF ELSE IF ===");

        int score=85;

        if(score>=90){
            System.out.println("A+");
        }else if(score>=75){
            System.out.println("A");
        }else if(score>=60){
            System.out.println("B");
        }else{
            System.out.println("C");
        }

        System.out.println("\n=== SWITCH CASE ===");

        int day=3;

        switch(day){
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            default:
                System.out.println("Other Day");
        }

        System.out.println("\n=== FOR LOOP ===");

        for(int i=1;i<=5;i++){
            System.out.print(i+" ");
        }
        System.out.println();

        System.out.println("\n=== WHILE LOOP ===");

        int i=1;

        while(i<=5){
            System.out.print(i+" ");
            i++;
        }
        System.out.println();

        System.out.println("\n=== DO WHILE LOOP ===");

        int j=1;

        do{
            System.out.print(j+" ");
            j++;
        }while(j<=5);

        System.out.println();

        System.out.println("\n=== BREAK ===");

        for(int k=1;k<=10;k++){
            if(k==6){
                break;
            }
            System.out.print(k+" ");
        }
        System.out.println();

        System.out.println("\n=== CONTINUE ===");

        for(int k=1;k<=10;k++){
            if(k==6){
                continue;
            }
            System.out.print(k+" ");
        }
        System.out.println();

        System.out.println("\n=== FUNCTIONS ===");

        System.out.println(add(10,20));

        System.out.println("\n=== RECURSION ===");

        System.out.println(factorial(5));

        System.out.println("\n=== CLASSES AND OBJECTS ===");

        Person p=new Person("Bob",21);
        p.display();

        System.out.println("\n=== ENCAPSULATION ===");

        p.setName("Tom");
        System.out.println(p.getName());

        System.out.println("\n=== INHERITANCE ===");

        Dog dog=new Dog();
        dog.sound();

        System.out.println("\n=== POLYMORPHISM ===");

        Animal animal=new Dog();
        animal.sound();

        System.out.println("\n=== INTERFACE ===");

        dog.play();

        System.out.println("\n=== ABSTRACT CLASS ===");

        Shape circle=new Circle(5);
        System.out.println(circle.area());

        System.out.println("\n=== COMPLETE ===");
        System.out.println("Java Basics Demonstration Finished");

        sc.close();
    }
}