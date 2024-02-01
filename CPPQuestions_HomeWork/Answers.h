#pragma once
1.
От ляво на знака '=' е поинтер на които се присвоява адреса на променливата "var"

From the left side of the sign '=' is a pointer to wich we assign the address of the
variable "var"

2.
WHILE цикъла извършва дадена операция докато условието е вяврно.Първо проверява дали условието е вярно и тогава влиза в цикъла.

DO WHILE цикъла изпълнява даденa операция  независимо условието дали е вярно или не.
Защото проверява накрая дали условието е вярно и ако е вярно пак ще изпълни същото парче код.

WHILE loop is executing a given operation until the condition is false.First checks
if the condition is true and then executes the code inside.

DO WHILE loop is executing a given operation no matter if the condition is true because
this loop checks if the condition is true at the end.If it is true the loop will execute
again.

3.
FOR цикъла изпълнява дадена операция колкото пъти ние му зададем докато даадено условие
е вярно.Например: for (int i = 0; i <= 100; i++) { cout << i << endl; }
В този пример цикъла ще се завърти 100 пъти.
Понеже условието му е докато i е по - малко от 100 и това ще изпринтира на конзолата числата от 0 до 100
последователно понеже сме задали стъпката да е "++" тоест даа увеличава  i с 1.

FOR loop is executing given operation the amout of times that we tell him to untill the condition that we set is true.
In this case^ the loop will execute the code 100 times because the condition is to execute untill it is smaller or equal to 100. It will print 
the numbers from 0 graduating to 100 to console because we said that every time it executes the code 'i' will be incremented by 1.

4.
Функциите ни дават възможността да спестим писане на код.Например ако трябва да
изчисляваме сумата на две числа.
Пример:

int square(int a, int b) {

	return a + b;
}
В този случай вместо когато искаме да изчислим сумата на дадени 2 числа не е нужно да пишем всеки път " a + b" 
a просто ще извикаме функцията като ще изглежда по следния начин:
int c = 5;
int b = 10;

int sum =square(c, b);

Functions give us a posibility to save writing code.Lets say that we need to calculate the sum of two intiger numbers.
When we make the function we dont have to write every time "c + b" but to just call the function and she will do everything for us.
		
5.
Неправилното меранжиране на паметта може да доведе нашата програма да спре да работи.
Например ако сме заделили динамична памет и след това не се погрижим да я изчистим
то това ще диведе до изтичане на памет тоест паметта ще остане заета въпреки, че не ни трябва.

В стековата памет се съхранявам нашите променливи и паметта автоматично се освобождава след като излезнем
от блока от код които вече се е изпълнил.достъпът до стековата памет е по - бърз но зависим
от размера на стека.

If we dont manage the memory properly it can bring our program to stop working.
Lets say that we allocate dynamic memory and after that we didnt clean it this will
lead to memory leaks.In other words the memory will remain full altough we dont need it.

Stack memory keeps our variables and the stack memory automaticly clears when the scope is
finished.The access to the stackk memmory is faster but we are limited by its size.

6.
Енкапсулацията се използва за скриване на характеристиките на определен обект и
разрешава използването само на необходимите данни и функционалности.
Можем да създадем публични(public) и частни (private) секции. Публините са достъпни 
за всички извън класа докато частните не са. 

Encapsulation is used for hiding the characteristics of out objects and allows
to use only the necessary data and functionalities
We can create public and private sections of the class. Public ones are 
accessible outside our class but private ones are not.
		
7.
Изключенията се използват когато изникне грешка по време на изпълнението на програмата.
Когато програмата покаже грешка то тя после може да бъде хваната и обработена в блока 'catch'
Например: 
		#include <stdexcept>
		double multiply(double a, double b) {
		if (a == 0) {

			throw invalid_argument("Multiply with 0 is forbidden");
		}
		return a * b;
		}
		
В примера проверяваме дали числото а е 0 и ако е то принтира че 0 и изхвърля 
изключение от тип invalid argument

Exceptions are used when an error comes up in runtime of the program.
When the program shows error it can be caught and be processed.
In this example we check if one of the numbers is 0 and if it is we throw an
exception from type invalid argument.

8. 
Векторите са сложен тип данни които използваме за съхранение на различни
типове данни или обекти защото са много по удобни за работи и може да се работи с 
размера им. Дали да се увеличава дали да се намалява. Имат най-различни функционалности понеже са клас.
И са лесни за обработка на данни.

Vectors are complicated type of data that we use for storage to different types
of data or objects because they are very handy for work and we can adjust their size.
They have variety of functionalities because they are class.


9.
Поинтерите са променливи които съхраняват адреси в паметта докато референциите са псевдоними
към вече съществуващи променливи.
Ако работим с динамичната памет поинтерите са предпочитани но ако работим със 
съществуващи обекти или променливи референциите са по предпочитани.
			
Pointers are variables wich store adresses in the memory, while refferences are nicknames
pointing to already existing variables or objects.
If we work with dynamic memori pointers are more preffered for this ocasion while 
if we work withc already existing objects or variables refferences are more preffered.

10.

Използваме шаблони когато искаме дадена функция да функционира с различни типове данни
за да не се пише излишен код.
например:

template<typename T> 
T maximum(T a, T b) {
	return (a > b) ? a : b;
}
			
При изпълнението на програмата компилатора знае и автоматично генерира код за сравнение 
и връща по голямото число от двете за съответния тип

We use templates when we want a given function to do its job with different
types of data so that we can save some code writing.
In this example the compiler know and automaticaly generates a code for comparison 
for the two numbers no matter their type



