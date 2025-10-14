#include <iostream>
using namespace std;

int main()
{

    int a = 1;
    int b = 9;
    
    int w=a++;  // w=1 , a=2 
    int v=++a ; // v=2 , a=2
    int c = a + b;
    int y = a / b;
    int z = a % b;

    std::cout << v;
    // std::cout << y;
    // std::cout << z;

    return 0;
}