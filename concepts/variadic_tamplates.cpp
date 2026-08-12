#include <iostream>
#include <vector>
#include <algorithm>

template <typename T1>
int myNumber(T1 ex)
{
    
    // std::cout << ex << std::endl;
   auto i =  std::size<T1>(ex);
   std::cout << i << std::endl;
    return 0;
}

int main(){

    myNumber<std::string>("Jose Pedro Fuxi André");
    // myNumber(12);
}