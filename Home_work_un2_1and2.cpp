#include <iostream>
#include <string>

int main()
{
    //+++задание №1+++//
    double n;
    std::cout << "Введите любое число (и будет магия) "; std::cin>>n;
    std::cout<< n << " - Магия"<<'\n';
    
    //+++задание №2+++//
    std::string word;
    std::cout << "Введите любое слово (только не иероглиф) "; std::cin>>word;
    std::cout<< word << "   __/\\__ Спасибо что не иероглиф"<<std::endl;
    
    return 0;
}
