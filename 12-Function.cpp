#include <iostream>
#include <string>



int sum(int first_number , int second_number){
    int result = first_number + second_number;
    return result;
}

int main(){
    
    int fir_num {10};
    int sec_num {20};

    std::cout << "First Number is: " << fir_num << std::endl;
    std::cout << "Second Number is: " << sec_num << std::endl;
    std::cout << "Sum of two numbers is: " << sum(fir_num, sec_num) << std::endl;
    std::cout << "Sum of 10 and 20 is: " << sum(10, 20) << std::endl;
}

