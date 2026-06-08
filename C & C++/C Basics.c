// C | Dennis Ritchie (1972) | General-purpose systems programming language used for operating systems, embedded systems and high-performance software.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a,int b){
    return a+b;
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

struct Student{
    char name[50];
    int age;
};

int main(){
    printf("=== OUTPUT ===\n");
    printf("Hello, C!\n");

    printf("\n=== INPUT ===\n");
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    printf("\n=== VARIABLES AND DATA TYPES ===\n");
    int num=10;
    float price=99.99f;
    double pi=3.1415926535;
    char grade='A';
    char name[]="Alice";

    printf("int: %d\n",num);
    printf("float: %.2f\n",price);
    printf("double: %.10lf\n",pi);
    printf("char: %c\n",grade);
    printf("string: %s\n",name);

    printf("\n=== TYPE CASTING ===\n");
    float result=(float)num/3;
    printf("%.2f\n",result);

    printf("\n=== OPERATORS ===\n");
    int a=10,b=3;

    printf("Addition: %d\n",a+b);
    printf("Subtraction: %d\n",a-b);
    printf("Multiplication: %d\n",a*b);
    printf("Division: %d\n",a/b);
    printf("Modulus: %d\n",a%b);

    printf("Equal: %d\n",a==b);
    printf("Not Equal: %d\n",a!=b);
    printf("Greater: %d\n",a>b);

    printf("Logical AND: %d\n",(a>5 && b>1));
    printf("Logical OR: %d\n",(a>20 || b>1));

    printf("Bitwise AND: %d\n",(a&b));
    printf("Bitwise OR: %d\n",(a|b));

    printf("\n=== ARRAYS ===\n");
    int numbers[5]={10,20,30,40,50};

    for(int i=0;i<5;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");

    printf("\n=== STRINGS ===\n");
    char city[20]="Hyderabad";
    printf("%s\n",city);
    printf("Length: %lu\n",strlen(city));

    printf("\n=== IF ELSE ===\n");
    if(age>=18){
        printf("Adult\n");
    }else{
        printf("Minor\n");
    }

    printf("\n=== IF ELSE IF ===\n");
    int marks=85;

    if(marks>=90){
        printf("Grade A+\n");
    }else if(marks>=75){
        printf("Grade A\n");
    }else if(marks>=60){
        printf("Grade B\n");
    }else{
        printf("Grade C\n");
    }

    printf("\n=== SWITCH CASE ===\n");
    int day=3;

    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Other Day\n");
    }

    printf("\n=== FOR LOOP ===\n");
    for(int i=1;i<=5;i++){
        printf("%d ",i);
    }
    printf("\n");

    printf("\n=== WHILE LOOP ===\n");
    int i=1;

    while(i<=5){
        printf("%d ",i);
        i++;
    }
    printf("\n");

    printf("\n=== DO WHILE LOOP ===\n");
    int j=1;

    do{
        printf("%d ",j);
        j++;
    }while(j<=5);

    printf("\n");

    printf("\n=== BREAK ===\n");
    for(int k=1;k<=10;k++){
        if(k==6){
            break;
        }
        printf("%d ",k);
    }
    printf("\n");

    printf("\n=== CONTINUE ===\n");
    for(int k=1;k<=10;k++){
        if(k==6){
            continue;
        }
        printf("%d ",k);
    }
    printf("\n");

    printf("\n=== FUNCTIONS ===\n");
    printf("10 + 20 = %d\n",add(10,20));

    printf("\n=== RECURSION ===\n");
    printf("Factorial of 5 = %d\n",factorial(5));

    printf("\n=== STRUCTS ===\n");
    struct Student s1;

    strcpy(s1.name,"Bob");
    s1.age=21;

    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);

    printf("\n=== ARRAY OF STRUCTS ===\n");
    struct Student students[2];

    strcpy(students[0].name,"Tom");
    students[0].age=20;

    strcpy(students[1].name,"Jerry");
    students[1].age=22;

    for(int x=0;x<2;x++){
        printf("%s %d\n",students[x].name,students[x].age);
    }

    printf("\n=== POINTERS ===\n");
    int value=100;
    int *ptr=&value;

    printf("Value: %d\n",value);
    printf("Address: %p\n",(void*)ptr);
    printf("Dereferenced Value: %d\n",*ptr);

    printf("\n=== POINTER ARITHMETIC ===\n");
    int arr[3]={1,2,3};
    int *p=arr;

    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);

    printf("\n=== DYNAMIC MEMORY ===\n");
    int *dynamicArray=(int*)malloc(3*sizeof(int));

    dynamicArray[0]=100;
    dynamicArray[1]=200;
    dynamicArray[2]=300;

    for(int y=0;y<3;y++){
        printf("%d ",dynamicArray[y]);
    }
    printf("\n");

    dynamicArray=(int*)realloc(dynamicArray,5*sizeof(int));

    dynamicArray[3]=400;
    dynamicArray[4]=500;

    for(int y=0;y<5;y++){
        printf("%d ",dynamicArray[y]);
    }
    printf("\n");

    free(dynamicArray);

    printf("\n=== COMPLETE ===\n");
    printf("C Basics Demonstration Finished\n");

    return 0;
}
