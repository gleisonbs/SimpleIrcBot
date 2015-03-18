#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) 
{
    if(argc < 2) 
        throw std::runtime_error("Insuficient number of arguments");

    int count = 1;
    double sum {};
    while(count < argc)
        sum += stoi(argv[count++]);

    cout << "Total sum: ";
    cout << sum << endl;
}
