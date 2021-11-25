#include <stdio.h>
#include <stdlib.h>
#include <math.h>



// 1_Hello World
void Hello_world(){
    printf("Hello World!\n");
}

// 2_Drawing a Shape
void Drawing_a_Shape(){
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

}

// 3_Variables
void Variables(){
    /*
        type of information
    */
    char characterName[] = "John";
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);
}

// 4_Data Types
void Data_Types(){
    int age = 40;
    double gpa = 3.6;
    char grade = 'A';
    char phrase[] = "Graffe Academy";
}

// 5_Printf
void Printf(){
    int favNum = 90;
    char myChar = 'i';
    printf("My favorite %s is %d", "number" ,favNum);
}

// 8_Constants
void Constant(){
    /* Unable to be modify */
    const int NUM = 5;
    printf("%d\n", NUM);
    //num = 8;
    printf("%d", NUM);

}

// 9_Getting User Input
void Getting_User_Input(){
    // Important
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    char name[20];
    printf("Enter your name: ");
    //scanf("%s", name);
    fgets(name, 20, stdin);
    printf("Your name is %s asdf", name);

}

// 10_Building a Basic Calculator
void Building_a_Basic_Calculator(){
    // I don't know why i can't canf char
    double num1, num2;
    char operator = '+';
    printf("Enter first numbers: ");
    scanf("%lf",&num1);
    printf("Enter second numbers: ");
    scanf("%lf", &num2);

    printf("Enter operator: ");
    scanf(" %c", &operator);
    printf("Answer: ");
    if(operator=='+'){
        printf("%f", num1+num2);
    }else if(operator=='-'){
        printf("%f", num1-num2);
    }else if(operator=='*'){
        printf("%f", num1*num2);
    }else if(operator=='/'){
        printf("%f", num1/num2);
    }

}

// 11_Building a Mad Libs Game
void Building_a_Mad_Libs_Game(){
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a pluralNoun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are bule\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
}

// 12_Arrays
void Arrays(){
    //int luckyNumbers[] = {4, 8 ,15, 16, 23, 42};
    //luckyNumbers[1] = 200;
    //printf("%d", luckyNumbers[1]);
    int luckyNumbers[10];
    luckyNumbers[1] = 80;
    printf("%d", luckyNumbers[0]);
}


// 13_Function
void sayHi(char name[]){
    printf("Hello %s", name);
}

// 14_return statement
double cube(double num){
    return num * num * num;
}

// prototype
double cube(double num);

// 15_If Statements

// Memory Addresses
void Memory_Addresses(){
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
}

// Pointer
void Pointer(){
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    printf("age's memory address: %p\n", &age);
}

// Dereferencing Pointers
void Derderencing_Pointers(){
    int age = 30;
    int *pAge = &age;
    printf("%d", *pAge);
}

int main()
{
    // 1_Hello World
    //Hello_world();

    // 2_Drawing a Shape
    //Drawing_a_Shape();

    // 3_Variables
    //Variables();

    // 4_Data Types
    //Data_Types();

    // 5_Printf
    //Printf();

    // 6_Working with number
    //printf("%f", ceil(36.356));

    // 7_Comments
    /* This prints out text */
    //printf("Comments are fun");

    // 8_Constants
    //Constant();

    // 9_Getting User Input
    //Getting_User_Input();

    // 10_Building a Basic Calculator
    //Building_a_Basic_Calculator();

    // 11_Building a Mad Libs Game
    //Building_a_Basic_Calculator();

    // 12_Arrays
    //Arrays();

    // 13_Function
    //sayHi("Mike");

    // 14_return statement
    //printf("%f", cube(7.0));

    // 15_If Statements

    // Memory Addresses
    //Memory_Addresses();
    
    // Pointer
    //Pointer();
    Derderencing_Pointers();
    return 0;
}