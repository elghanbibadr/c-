#include <iostream>
using namespace std;

int main() {

    int a=1;
   int b=9;
  
   a=a+b;  //10
   b=a-b ; //original a 
   a=a-b ;

 
   std::cout << a ;
   std::cout << b ;

   return 0;
}