#include <iostream>
#include"Book.h"

int main()
{
	Book book1("title1", "author1", 200);
	Book book2("title2", "author2", 220);

	book1.display();
	book2.display();
	
	
	return 0;
}

