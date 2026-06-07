// C++ | Bjarne Stroustrup (1985) | Multi-paradigm language extending C with OOP and generic programming, used in games, browsers, finance and systems software.

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

template<typename T>
T square(T value){
    return value*value;
}

int add(int a,int b){
    return a+b;
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

class Person{
private:
    string name;
    int age;

public:
    Person(string n,int a){
        name=n;
        age=a;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

    string getName(){
        return name;
    }

    void setName(string n){
        name=n;
    }
};

class Animal{
public:
    virtual void sound(){
        cout<<"Animal Sound"<<endl;
    }
};

class Dog:public Animal{
public:
    void sound() override{
        cout<<"Bark"<<endl;
    }
};

int main(){
    cout<<"=== OUTPUT ==="<<endl;
    cout<<"Hello, C++!"<<endl;

    cout<<"\n=== INPUT ==="<<endl;
    int age;
    cout<<"Enter age: ";
    cin>>age;

    cout<<"\n=== VARIABLES AND DATA TYPES ==="<<endl;
    int num=10;
    float price=99.99f;
    double pi=3.1415926535;
    char grade='A';
    bool isStudent=true;
    string name="Alice";

    cout<<num<<endl;
    cout<<price<<endl;
    cout<<pi<<endl;
    cout<<grade<<endl;
    cout<<isStudent<<endl;
    cout<<name<<endl;

    cout<<"\n=== TYPE CASTING ==="<<endl;
    double result=(double)num/3;
    cout<<result<<endl;

    cout<<"\n=== OPERATORS ==="<<endl;
    int a=10,b=3;

    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;

    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>b)<<endl;

    cout<<(a>5 && b>1)<<endl;
    cout<<(a>20 || b>1)<<endl;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;

    cout<<"\n=== ARRAYS ==="<<endl;
    int numbers[5]={10,20,30,40,50};

    for(int i=0;i<5;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;

    cout<<"\n=== STRING ==="<<endl;
    string city="Hyderabad";
    cout<<city<<endl;
    cout<<city.length()<<endl;

    cout<<"\n=== VECTOR (LIST EQUIVALENT) ==="<<endl;
    vector<int> nums={1,2,3};

    nums.push_back(4);

    for(int n:nums){
        cout<<n<<" ";
    }
    cout<<endl;

    cout<<"\n=== SET ==="<<endl;
    set<int> uniqueNumbers={10,20,20,30};

    for(int n:uniqueNumbers){
        cout<<n<<" ";
    }
    cout<<endl;

    cout<<"\n=== MAP ==="<<endl;
    map<string,int> marks;

    marks["Math"]=95;
    marks["Science"]=90;

    cout<<marks["Math"]<<endl;
    cout<<marks["Science"]<<endl;

    cout<<"\n=== IF ELSE ==="<<endl;
    if(age>=18){
        cout<<"Adult"<<endl;
    }else{
        cout<<"Minor"<<endl;
    }

    cout<<"\n=== IF ELSE IF ==="<<endl;
    int score=85;

    if(score>=90){
        cout<<"A+"<<endl;
    }else if(score>=75){
        cout<<"A"<<endl;
    }else if(score>=60){
        cout<<"B"<<endl;
    }else{
        cout<<"C"<<endl;
    }

    cout<<"\n=== SWITCH CASE ==="<<endl;
    int day=3;

    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        default:
            cout<<"Other Day"<<endl;
    }

    cout<<"\n=== FOR LOOP ==="<<endl;
    for(int i=1;i<=5;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\n=== WHILE LOOP ==="<<endl;
    int i=1;

    while(i<=5){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    cout<<"\n=== DO WHILE LOOP ==="<<endl;
    int j=1;

    do{
        cout<<j<<" ";
        j++;
    }while(j<=5);

    cout<<endl;

    cout<<"\n=== BREAK ==="<<endl;
    for(int k=1;k<=10;k++){
        if(k==6){
            break;
        }
        cout<<k<<" ";
    }
    cout<<endl;

    cout<<"\n=== CONTINUE ==="<<endl;
    for(int k=1;k<=10;k++){
        if(k==6){
            continue;
        }
        cout<<k<<" ";
    }
    cout<<endl;

    cout<<"\n=== FUNCTIONS ==="<<endl;
    cout<<add(10,20)<<endl;

    cout<<"\n=== RECURSION ==="<<endl;
    cout<<factorial(5)<<endl;

    cout<<"\n=== REFERENCES ==="<<endl;
    int value=100;
    int &ref=value;

    cout<<value<<endl;
    cout<<ref<<endl;

    ref=200;
    cout<<value<<endl;

    cout<<"\n=== CLASSES AND OBJECTS ==="<<endl;
    Person p("Bob",21);
    p.display();

    cout<<"\n=== ENCAPSULATION ==="<<endl;
    p.setName("Tom");
    cout<<p.getName()<<endl;

    cout<<"\n=== INHERITANCE ==="<<endl;
    Dog dog;
    dog.sound();

    cout<<"\n=== POLYMORPHISM ==="<<endl;
    Animal *animal=new Dog();
    animal->sound();
    delete animal;

    cout<<"\n=== TEMPLATE ==="<<endl;
    cout<<square(5)<<endl;
    cout<<square(2.5)<<endl;

    cout<<"\n=== COMPLETE ==="<<endl;
    cout<<"C++ Basics Demonstration Finished"<<endl;

    return 0;
}