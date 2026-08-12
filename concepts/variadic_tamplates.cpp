#include <iostream>
#include <vector>
#include <algorithm>

//simple templetes

// template <typename T>
// void printl(T t){
//     std::cout << t << std::endl;
// }

template <typename T1>
int myNumber(T1 ex)
{
    
    // std::cout << ex << std::endl;
   auto i =  std::size<T1>(ex);
   std::cout << i << std::endl;
    return 0;
}

template <class myType, int src>
int minValue(myType arr, int size)
{
    int base = src;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < base)
            base = arr[i];
    }
    std::cout << "The min value is = " <<  base << std::endl;
    return base;
}


// Variadic Templates
void printl(){return ;}

template <typename T, typename... Others>
void printl(T frst, Others... scd)
{
    std::cout << frst <<std:: endl;
    printl(scd...);
}
int main(){

    std::vector<std::string> B {"joandre 42"};
    for (int i = 0; i < 20; i++)
    {
        B.push_back(std::to_string(i));
    }
    myNumber<std::string>("Jose Pedro Fuxi André");
    myNumber<std::vector<std::string>>(B);
    int arr[] = {20,1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    minValue<int[], -100>(arr, size);
    printl<>("Hello", "World", "Variadic", "Templates", 42, 3.14);
}