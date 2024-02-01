using namespace std;
#include <iostream>
#include"Adress.h"
#include"Package.h"
#include <vector>

int main()
{
    
    Adress cust1("Viktor", "01233123", "asdasd", "asdas");
    Adress cust2("asdasd", "1231232", "asdasd", "asdasd");
    vector<Adress> asd;

    asd.push_back(cust1);
    asd.push_back(cust2);

    for (int i = 0; i <= asd.size(); i++) {
        asd.at(i).print();
    }
    

    return 0;
}

