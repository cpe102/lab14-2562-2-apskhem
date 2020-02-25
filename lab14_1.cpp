#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    char b = 'A';
    char &c = b;
    
    int *x = &a;
    char *y = &b;
    
    int **z = &x;
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;
    cout << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << (int*)&b << endl;
    cout << "Address of c: " << (int*)&c << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of y: " << (int*)&y << endl;
    cout << "Address of z: " << &z << endl;
    cout << endl;
    
    c = 'F';
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << (int*)y << endl;
    cout << "Value of z: " << z << endl;
    cout << endl;
    
    *y = 'W';
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << (int*)y << endl;
    cout << "Value of z: " << z << endl;
    cout << endl;
    
    *x = 6;
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << (int*)y << endl;
    cout << "Value of z: " << z << endl;
    cout << endl;
    
    **z = 7;
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << (int*)y << endl;
    cout << "Value of z: " << z << endl;
    cout << endl;
    
    return 0;
}
