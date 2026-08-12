#include <iostream>
#include <vector>

template <typename T1>
int myNumber(T1 ex)
{
    std::vector<T1> My_list;
    My_list.push_back(ex);
    std::cout << My_list.front() << std::endl;
    return 0;
}   

int main(){

    myNumber("Jose Pedro Fuxi André");
    myNumber(12);
}