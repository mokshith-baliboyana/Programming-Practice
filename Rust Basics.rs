// Rust | Graydon Hoare (2010) | Systems programming language focused on performance, memory safety and concurrency, used for operating systems, backend services, embedded systems and tooling.

use std::collections::{HashMap,HashSet};
use std::io;

fn add(a:i32,b:i32)->i32{
    a+b
}

fn factorial(n:u32)->u32{
    if n<=1{
        1
    }else{
        n*factorial(n-1)
    }
}

fn square<T>(x:T)->T
where
    T:std::ops::Mul<Output=T>+Copy{
    x*x
}

fn print_string_length(text:&String){
    println!("Length: {}",text.len());
}

struct Person{
    name:String,
    age:u32
}

impl Person{
    fn new(name:String,age:u32)->Self{
        Self{name,age}
    }

    fn display(&self){
        println!("Name: {}",self.name);
        println!("Age: {}",self.age);
    }

    fn set_name(&mut self,name:String){
        self.name=name;
    }
}

enum Day{
    Monday,
    Tuesday,
    Wednesday
}

trait Animal{
    fn sound(&self);
}

struct Dog;

impl Animal for Dog{
    fn sound(&self){
        println!("Bark");
    }
}

fn main(){
    println!("=== OUTPUT ===");
    println!("Hello, Rust!");

    println!("\n=== INPUT ===");

    let mut input=String::new();

    println!("Enter age:");

    io::stdin()
        .read_line(&mut input)
        .expect("Failed");

    let age:u32=input.trim().parse().unwrap_or(0);

    println!("\n=== VARIABLES AND DATA TYPES ===");

    let num:i32=10;
    let price:f32=99.99;
    let pi:f64=3.1415926535;
    let grade:char='A';
    let is_student:bool=true;

    println!("{}",num);
    println!("{}",price);
    println!("{}",pi);
    println!("{}",grade);
    println!("{}",is_student);

    println!("\n=== MUTABLE VARIABLES ===");

    let mut count=5;

    println!("{}",count);

    count=10;

    println!("{}",count);

    println!("\n=== CONSTANT ===");

    const MAX_POINTS:i32=100;

    println!("{}",MAX_POINTS);

    println!("\n=== TYPE CONVERSION ===");

    let result=num as f64/3.0;

    println!("{}",result);

    println!("\n=== OPERATORS ===");

    let a=10;
    let b=3;

    println!("{}",a+b);
    println!("{}",a-b);
    println!("{}",a*b);
    println!("{}",a/b);
    println!("{}",a%b);

    println!("{}",a==b);
    println!("{}",a!=b);
    println!("{}",a>b);

    println!("{}",a>5 && b>1);
    println!("{}",a>20 || b>1);

    println!("{}",a&b);
    println!("{}",a|b);

    println!("\n=== ARRAY ===");

    let numbers=[10,20,30,40,50];

    for n in numbers{
        print!("{} ",n);
    }

    println!();

    println!("\n=== TUPLE ===");

    let person=("Alice",21,true);

    println!("{}",person.0);
    println!("{}",person.1);
    println!("{}",person.2);

    println!("\n=== STRING ===");

    let city=String::from("Hyderabad");

    println!("{}",city);
    println!("{}",city.len());
    println!("{}",city.to_uppercase());

    println!("\n=== VECTOR ===");

    let mut nums=vec![1,2,3];

    nums.push(4);

    println!("{:?}",nums);

    println!("\n=== HASHSET ===");

    let mut set=HashSet::new();

    set.insert(10);
    set.insert(20);
    set.insert(20);
    set.insert(30);

    println!("{:?}",set);

    println!("\n=== HASHMAP ===");

    let mut marks=HashMap::new();

    marks.insert("Math",95);
    marks.insert("Science",90);

    println!("{:?}",marks);

    println!("\n=== IF ELSE ===");

    if age>=18{
        println!("Adult");
    }else{
        println!("Minor");
    }

    println!("\n=== IF ELSE IF ===");

    let score=85;

    if score>=90{
        println!("A+");
    }else if score>=75{
        println!("A");
    }else if score>=60{
        println!("B");
    }else{
        println!("C");
    }

    println!("\n=== MATCH ===");

    let day=Day::Wednesday;

    match day{
        Day::Monday=>println!("Monday"),
        Day::Tuesday=>println!("Tuesday"),
        Day::Wednesday=>println!("Wednesday")
    }

    println!("\n=== FOR LOOP ===");

    for i in 1..=5{
        print!("{} ",i);
    }

    println!();

    println!("\n=== WHILE LOOP ===");

    let mut i=1;

    while i<=5{
        print!("{} ",i);
        i+=1;
    }

    println!();

    println!("\n=== LOOP ===");

    let mut j=1;

    loop{
        print!("{} ",j);

        if j==5{
            break;
        }

        j+=1;
    }

    println!();

    println!("\n=== BREAK ===");

    for k in 1..=10{
        if k==6{
            break;
        }
        print!("{} ",k);
    }

    println!();

    println!("\n=== CONTINUE ===");

    for k in 1..=10{
        if k==6{
            continue;
        }
        print!("{} ",k);
    }

    println!();

    println!("\n=== FUNCTIONS ===");

    println!("{}",add(10,20));

    println!("\n=== RECURSION ===");

    println!("{}",factorial(5));

    println!("\n=== OWNERSHIP ===");

    let s1=String::from("Hello");
    let s2=s1;

    println!("{}",s2);

    println!("\n=== BORROWING ===");

    let text=String::from("Rust");

    print_string_length(&text);

    println!("{}",text);

    println!("\n=== REFERENCES ===");

    let value=100;
    let reference=&value;

    println!("{}",value);
    println!("{}",reference);

    println!("\n=== STRUCTS ===");

    let mut p=Person::new(String::from("Bob"),21);

    p.display();

    println!("\n=== METHODS ===");

    p.set_name(String::from("Tom"));

    p.display();

    println!("\n=== ENUM ===");

    let today=Day::Tuesday;

    match today{
        Day::Monday=>println!("Monday"),
        Day::Tuesday=>println!("Tuesday"),
        Day::Wednesday=>println!("Wednesday")
    }

    println!("\n=== TRAITS ===");

    let dog=Dog;

    dog.sound();

    println!("\n=== GENERICS ===");

    println!("{}",square(5));
    println!("{}",square(2.5));

    println!("\n=== COMPLETE ===");

    println!("Rust Basics Demonstration Finished");
}