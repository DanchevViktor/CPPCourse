#include"Box.h"
#include <iostream>

int main()
{
    Box box1(7,9,10); // 5 length  9 width
    Box box2(5,9,10);
    
    Box box3 = box1 + box2;

    box3.print();


    return 0;
}

