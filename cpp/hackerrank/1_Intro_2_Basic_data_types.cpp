/*
* Basic Data Types 
* Int ("%d"): 32 Bit integer
* Long ("%ld"): 64 bit integer
* Char ("%c"): Character type
* Float ("%f"): 32 bit real value
* Double ("%lf"): 64 bit real value
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Init
    int a; long long b; char c; float d; double e;

    // Input
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);

    // Output
    printf("%d\n%lld\n%c\n%f\n%lf", a, b, c, d, e);

    return 0;
}