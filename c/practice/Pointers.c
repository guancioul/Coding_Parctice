#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

/*
Pointers in C / C++ [Full Course]
https://www.youtube.com/watch?v=zuegQmMdy8M
*/

// Working with pointers
void working_with_pointers(){
    int a = 10;
    int *p;
    p = &a;

    printf("%d\n", p);
    printf("value at address p is %d\n", *p);
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address p+1 is %d\n", p+1);
    printf("value at address p+1 is %d\n", *(p+1));
}

//Pointer types, void pointer, pointer arithmetic
void Pointer_type(){
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n",p,*p);
    printf("Address = %d, value = %d\n",p+1,*(p+1));
    char *p0;
    p0 = (char*)p; //typecasting
    printf("size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n",p0,*p0);
    printf("Address = %d, value = %d\n",p0+1,*(p0+1));

    // Void Pointer - Genric pointer
    void *p1;
    p1 = p;
    printf("Address = %d\n",p1);
}

// Pointer to pointer
void Pointer_to_pointer(){
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d\n",*p); //6
    printf("%d\n",*(*q)); //6
    printf("%d\n",*(*(*r))); //6
    ***r = 10;
    printf("x = %d\n", x);
    **q = *p+2;
    printf("x = %d\n", x);
}

// Pointers as function arguments - call by reference
void Increment(int* p){
    *p = (*p) + 1;
    printf("Address of variable a in increment = %d\n", p);
}
void call_by_reference(){
    int a;
    a = 10;
    Increment(&a);
    printf("Address of variable a in main = %d\n", &a);
    printf("a = %d\n", a);
}

// Pointers and Arrays
void Pointers_Arrays(){
    int A[] = {2,4,5,8,1};
    //printf("%d\n",A);
    //printf("%d\n",&A[0]);
    //printf("%d\n",A[0]);
    //printf("%d\n",*A);
    for(int i=0; i<5; i++){
        printf("Address = %d\n",A+i);
        printf("Address = %d\n",&A[i]);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i));
    }
}

// Array as function arguments
int SumOfElements(int A[], int size){
    int i, sum = 0;
    //printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for(i = 0; i < size; i++){
        sum+=A[i];
    }
    return sum;
}
void Array_function(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size);
    printf("Sum of elements = %d\n", total);
    printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
}

// Character arrays and pointers
void print(char* C){
    int i = 0; 
    while(*C!='\0'){
        printf("%c",*C);
        C++;
    }
    printf("\n");
}
void Character_array(){
    //char C[20] = "John";
    //C[0] = 'J';
    //C[1] = 'O';
    //C[2] = 'H';
    //C[3] = 'N';
    //C[4] = '\0';
    //int len = strlen(C);
    //printf("Length = %d\n", len);
    //printf("%s", C);
    char C[20] = "Hello";
    print(C);
}

// Pointers and multi-dimensional array
void two_dimensional_array(){
    int B[2][3];
    int(*p)[3] = B;
    printf("%d\n", B);
    printf("%d\n", *B);
    printf("%d\n", B[0]);
    printf("%d\n", &B[0][0]);
    printf("%d\n", &**B);
}
void Func(int (*C)[2][2]){

}
void three_dimensional_array(){
    int C[3][2][2]={{{2,5},{7,9}},
                    {{3,4},{6,1}},
                    {{0,8},{11,13}}};
    printf("%d %d %d %d", C, *C, C[0], &C[0][0]);
    Func(C);
}

// Pointers and dynamic memory
/*
C:
malloc
calloc
realloc
free

C++:
new
delete
*/
int total;
int Square(int x){
    return x*x;
}
int SquareOfSum(int x, int y){
    int z = Square(x+y);
    return z;
}
void Pointers_and_dynamic_memory(){
    //int a = 4, b = 8;
    //total = SquareOfSum(a, b);
    //printf("output = %d\n", total);
    int a;
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    //Remember to free the heap memory
    free(p);
    p = (int*)malloc(20*sizeof(int));
    *p = 20;
}
// Malloc, Calloc, Realloc, Free
void malloc_calloc_realloc_free(){
    // typecasting
    // will set garbage
    //int *p = (int*)malloc(3*sizeof(int));
    // will set all the value 0
    //*p = (int*)calloc(3, sizeof(int));
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int));
    //int *A = (int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        A[i] = i+1;
        printf("%d ", A[i]);
    }
    int *B = (int*)realloc(A, 0); // equivalent to free(A)
    //int *C = (int*)malloc(NULL, n*sizeof(int)); // equivalent to malloc
    printf("\n");
    printf("Prev block address = %d, new address = %d\n",A, B);
    for(int i=0; i<n; i++){
        printf("%d ", B[i]);
    }
    free(A); free(B);
}

// Pointers as function returns
void PrintHelloWorld(){
    printf("Hello World\n");
}
int* Add1(int* a, int* b){
    int* c = (int*)malloc(sizeof(int));
    *c = (*a)+(*b);
    return c;
}
void pointers_as_function_returns(){
    int a = 2, b = 4;
    int* ptr = Add1(&a, &b);
    PrintHelloWorld();
    printf("Sum = %d\n", *ptr);
}

// Function Pointers
int Add(int a, int b){
    return a+b;
}
void function_pointers(){
    void (*ptr)();
    int c;
    int (*p)(int,int);
    p = Add;
    c = p(2, 3);
    printf("%d",c);
}

// Function Pointers and Callback
int compare(int a, int b){
    if(a>b) return 1;
    return -1;
}
int abosulte_compare(int a, int b){
    if(abs(a)>abs(b)) return 1;
    return -1;
}
int qsort_compare(const void* a, const void* b){
    int A = *((int*)a); // typecasting to int* and getting value
    int B = *((int*)b);
    return B-A;
}

void BubbleSort(int *A, int n, int (*compare)(int, int)){
    int temp;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(compare(A[j],A[j+1]) > 0){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void function_pointers_and_Callback(){
    int A[]={-31,22,1,50,-6,4};
    int n = sizeof(A)/sizeof(int);
    //BubbleSort(A, n, abosulte_compare);
    qsort(A, n, sizeof(int), qsort_compare);
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}

// What is memory leak
// "Simple Betting game"
// "Jack Queen King" - computer shuffles these cards
// player has to guess the position of queen
// if he wins, he takes 3*bet
// if he looses, he losses the bet amount.
// player has $100 initially
int cash = 100;
void Play(int bet){
    char *C = (char*)malloc(3*sizeof(char));
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
    //char C[3] = {'J', 'Q', 'K'};
    printf("Shuffling ...");
    srand(time(NULL));
    for(int i=0; i<5; i++){
        int x = rand()%3;
        int y = rand()%3;
        int temp = C[x]; 
        C[x] = C[y]; 
        C[y] = temp;
    }
    int playerGuess;
    printf("What's the position of queen - 1,2, or 3?");
    scanf("%d", &playerGuess);
    if(C[playerGuess-1]=='Q'){
        cash+=3*bet;
        printf("You Win ! Result = %c %c %c Total Cash = %d", C[0], C[1], C[2], cash);
    }else{
        cash -= bet;
        printf("You Loss ! Result = %c %c %c Total Cash = %d", C[0], C[1], C[2], cash);
    }
}
void memory_leak(){
    int bet;
    while(cash>0){
        printf("What's your bet? $");
        scanf("%d",&bet);
        if(bet == 0 || bet > cash) break;
        Play(bet);
        printf("\n********************************\n");
    }
}

int main(){
    // Working with pointers
    //working_with_pointers();
    // Pointer types, void pointer, pointer arithmetic
    //Pointer_type();
    // Pointer to pointer
    //Pointer_to_pointer();
    // Pointers as function arguments - call by reference
    //call_by_reference();
    // Pointers and Arrays
    //Pointers_Arrays();
    // Array as function arguments
    //Array_function();
    // Character arrays and pointers
    //Character_array();
    // Pointers and multi-dimensional array
    //two_dimensional_array();
    // Pointers and dynamic memory
    //Pointers_and_dynamic_memory();
    // Malloc, Calloc, Realloc, Free
    //malloc_calloc_realloc_free();
    // Pointers as function returns
    //pointers_as_function_returns();
    // Function Pointers
    //function_pointers();
    // Function Pointers and Callback
    //function_pointers_and_Callback();
    // What is memory leak
    memory_leak();

    return 0;
}