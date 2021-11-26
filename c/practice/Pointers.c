#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
int SumOfElements(int A[]){
    int i, sum = 0;
    int size = sizeof(A)/sizeof(A[0]);
    printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for(i = 0; i < size; i++){
        sum+=A[i];
    }
    return sum;
}
void Array_function(){
    int A[] = {1,2,3,4,5};
    int total = SumOfElements(A);
    printf("Sum of elements = %d\n", total);
    printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
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
    Array_function();


    return 0;
}