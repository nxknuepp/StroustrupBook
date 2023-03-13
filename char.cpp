#include <iostream>
using std::cin, std::cout, std::string;
// input name and age, then print them out
int main()
{
    char* nick = "nick";
    cout << nick << "\n";
    cout <<&nick[1] << "\n";
    return 0;
}
