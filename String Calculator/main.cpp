
#include <iostream>
#include <string>
#include <sstream>
#include <cassert>


using namespace std;


int string_calculator(string str) {
    
    if (str.empty()) {
        return 0;
    }
    
    int sum = 0;
    size_t start = 0;
    
    string delimiters = ",;";
        
    while (start < str.size()) {
        size_t end = str.find_first_of(delimiters, start);
        
        string number = str.substr(start, end-start);
        
        if (!number.empty()) {
            sum += stoi(number);
            
        }
        
        if(end == string::npos) {
            break;
        }
        
        start = end + 1;
        
    }
       
    
    return sum;
}
    



int main()

{
    assert(string_calculator("") == 0);
    assert(string_calculator("1,2") == 3);
    assert(string_calculator("1,2,2") == 5);
    cout << "everyting passed!";
    
    
    return EXIT_SUCCESS;
}
