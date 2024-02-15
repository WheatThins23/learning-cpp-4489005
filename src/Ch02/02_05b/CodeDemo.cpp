// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345;
    auto  c = 3.114f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rocks!";

    std::cout << "The tyoe of a is " << typeid(a).name() << std::endl;
    std::cout << "The tyoe of a is " << typeid(b).name() << std::endl;
    std::cout << "The tyoe of a is " << typeid(c).name() << std::endl;
    std::cout << "The tyoe of a is " << typeid(d).name() << std::endl;
    std::cout << "The tyoe of a is " << typeid(e).name() << std::endl;
    std::cout << "The tyoe of a is " << typeid(f).name() << std::endl;
    std::cout << "The tyoe of a is " << typeid(g).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
