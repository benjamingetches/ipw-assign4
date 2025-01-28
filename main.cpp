#include <cassert>
#include <vector>
#include <iostream>
#include "functions_to_implement.cpp"

int main(){
    std::vector<int> test1 = {1, 2, 3, 4, 5};  //std case
    assert(Sum(test1) == 15);
       
    std::vector<int> test2 = {};  //empty vector
    assert(Sum(test2) == 0); 
    
    std::vector<int> test4 = {-1, -2, -3, -4}; //negatives
    assert(Sum(test4) == -10);

    std::vector<int> test5 = {-2, 0, 4, -1, 3}; //mix
    assert(Sum(test5) == 4);

    std::cout << "4/4 test cases passed."<< std::endl;
    return 0;
}