#include <iostream>
#include <sstream>
// #include <QString>
// #include <QDebug>

bool myarray[5][5]{};

int main()
{
    std::string mystring_1("1");
    std::string mystring_2("2");
    int index = std::stoi(mystring_2);
    std::istringstream(mystring_1) >> myarray[0][index];
    // myarray[0][2] = true;
    std::cout << "myarray [0][2] = " << myarray[0][2] << std::endl;
}
