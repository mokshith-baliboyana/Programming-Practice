// JavaScript | Brendan Eich (1995) | Language of the web used for interactive websites, frontend applications, backend services and full-stack development.

function add(a,b){
    return a+b;
}

function factorial(n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

const square=x=>x*x;

class Person{
    constructor(name,age){
        this._name=name;
        this._age=age;
    }

    getName(){
        return this._name;
    }

    setName(name){
        this._name=name;
    }

    display(){
        console.log("Name:",this._name);
        console.log("Age:",this._age);
    }
}

class Animal{
    sound(){
        console.log("Animal Sound");
    }
}

class Dog extends Animal{
    sound(){
        console.log("Bark");
    }
}

console.log("=== OUTPUT ===");
console.log("Hello, JavaScript!");

console.log("\n=== INPUT ===");
let age=18;
// Browser:
// let age=Number(prompt("Enter age:"));
// Node.js:
// const readline=require("readline-sync");
// let age=Number(readline.question("Enter age: "));

console.log("\n=== VARIABLES AND DATA TYPES ===");

let num=10;
let price=99.99;
let pi=3.1415926535;
let grade='A';
let isStudent=true;
let name="Alice";
let nothing=null;
let notAssigned=undefined;

console.log(num);
console.log(price);
console.log(pi);
console.log(grade);
console.log(isStudent);
console.log(name);
console.log(nothing);
console.log(notAssigned);

console.log("\n=== TYPE CONVERSION ===");

let result=Number(num)/3;

console.log(result);
console.log(Number("123"));
console.log(String(123));
console.log(Boolean(1));

console.log("\n=== OPERATORS ===");

let a=10;
let b=3;

console.log(a+b);
console.log(a-b);
console.log(a*b);
console.log(a/b);
console.log(a%b);
console.log(a**b);

console.log(a==b);
console.log(a!=b);
console.log(a>b);

console.log(a===10);
console.log(a!==b);

console.log(a>5 && b>1);
console.log(a>20 || b>1);
console.log(!(a>b));

console.log(a&b);
console.log(a|b);

console.log("\n=== ARRAY ===");

let numbers=[10,20,30,40,50];

console.log(numbers);
console.log(numbers[0]);

numbers.push(60);

for(let n of numbers){
    process?.stdout ? process.stdout.write(n+" ") : console.log(n);
}

console.log();

console.log("\n=== OBJECT ===");

let student={
    name:"Bob",
    age:21
};

console.log(student);
console.log(student.name);
console.log(student.age);

console.log("\n=== SET ===");

let uniqueNumbers=new Set([10,20,20,30,40]);

uniqueNumbers.add(50);

console.log(uniqueNumbers);

console.log("\n=== MAP ===");

let marks=new Map();

marks.set("Math",95);
marks.set("Science",90);

console.log(marks.get("Math"));
console.log(marks.get("Science"));

console.log("\n=== STRING ===");

let city="Hyderabad";

console.log(city);
console.log(city.length);
console.log(city.toUpperCase());
console.log(city.toLowerCase());
console.log(city.replace("Hyder","Cyber"));

console.log("\n=== ARRAY METHODS ===");

let nums=[1,2,3,4,5];

let squares=nums.map(x=>x*x);
let evens=nums.filter(x=>x%2===0);
let total=nums.reduce((sum,x)=>sum+x,0);

console.log(squares);
console.log(evens);
console.log(total);

console.log("\n=== IF ELSE ===");

if(age>=18){
    console.log("Adult");
}else{
    console.log("Minor");
}

console.log("\n=== IF ELSE IF ===");

let score=85;

if(score>=90){
    console.log("A+");
}else if(score>=75){
    console.log("A");
}else if(score>=60){
    console.log("B");
}else{
    console.log("C");
}

console.log("\n=== SWITCH CASE ===");

let day=3;

switch(day){
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    default:
        console.log("Other Day");
}

console.log("\n=== FOR LOOP ===");

for(let i=1;i<=5;i++){
    process?.stdout ? process.stdout.write(i+" ") : console.log(i);
}

console.log();

console.log("\n=== WHILE LOOP ===");

let i=1;

while(i<=5){
    process?.stdout ? process.stdout.write(i+" ") : console.log(i);
    i++;
}

console.log();

console.log("\n=== DO WHILE LOOP ===");

let j=1;

do{
    process?.stdout ? process.stdout.write(j+" ") : console.log(j);
    j++;
}while(j<=5);

console.log();

console.log("\n=== BREAK ===");

for(let k=1;k<=10;k++){
    if(k===6){
        break;
    }
    process?.stdout ? process.stdout.write(k+" ") : console.log(k);
}

console.log();

console.log("\n=== CONTINUE ===");

for(let k=1;k<=10;k++){
    if(k===6){
        continue;
    }
    process?.stdout ? process.stdout.write(k+" ") : console.log(k);
}

console.log();

console.log("\n=== FUNCTIONS ===");

console.log(add(10,20));

console.log("\n=== RECURSION ===");

console.log(factorial(5));

console.log("\n=== ARROW FUNCTION ===");

console.log(square(5));

console.log("\n=== CLASSES AND OBJECTS ===");

let p=new Person("Tom",21);

p.display();

console.log("\n=== ENCAPSULATION ===");

p.setName("Jerry");

console.log(p.getName());

console.log("\n=== INHERITANCE ===");

let dog=new Dog();

dog.sound();

console.log("\n=== POLYMORPHISM ===");

let animal=new Dog();

animal.sound();

console.log("\n=== COMPLETE ===");

console.log("JavaScript Basics Demonstration Finished");