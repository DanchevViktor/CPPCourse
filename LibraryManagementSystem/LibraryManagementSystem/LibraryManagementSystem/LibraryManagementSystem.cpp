#include <iostream>
using namespace std;
#include "Book.h"
#include "Member.h"

int main()
{

    Book book1("The Song Of Ice And Fire", "Viktor Danchev", "123 - 31231 - 123");
    Book book2("Six Crimson Cranes", "Elizabeth Lim", "1312-1231-213-231");
    Book book3("The Witcher", "Andrzej Sapkowski", "1312-1231-213-231");


    Member mem1("Reni", 23, "TheJester");
    Member mem2("Viktoria", 23, "TheStiv");
    Member mem3("Georgi", 15, "ThePot");
    

    Book books[3]
    { book1,book2,book3 };

    Member members[3]
    { mem1,mem2,mem3 };


    

    for (int i = 0; i < 3; i++) {
        books[i].display();
        cout << endl;
    }
    for (int k = 0; k < 3; k++) {
        members[k].display();
        cout << endl;
    }

    members[1].borrowBook(&books[2]);
    
    for (int i = 0; i < 3; i++) {
        books[i].display();
    }



    
    return 0;
}

