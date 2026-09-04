
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
    stringstream ss(str);
    string number;
    
    while (getline(ss, number, ',')){
        stringstream sub_ss(number);
        string ss_number;
        
        while (getline(sub_ss, ss_number, ';')) {
            if(ss_number.empty()){
                sum +=stoi(ss_number);
            }
        }
    }
    
    
    return sum;
}
    
    




int main()

{
    assert(string_calculator(" ") == 0);
    assert(string_calculator("1,2,3") == 6);
    assert(string_calculator("1;2") == 3);
    
    cout << "everyting passed!";
    
    
    return EXIT_SUCCESS;
}
