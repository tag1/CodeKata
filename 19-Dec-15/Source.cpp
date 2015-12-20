/*
Hello, coders! An important part of programming is being able to apply your programs, so your challenge for today is to create a calculator
application that has use in your life. It might be an interest calculator, or it might be something that you can use in the classroom.
For example, if you were in physics class, you might want to make a F = M * A calc.

EXTRA CREDIT: make the calculator have multiple functions! Not only should it be able to calculate F = M * A, but also A = F/M, and M = F/A!
*/

#include <iostream>

double drtCalculator(double rate, double time);

int main(){

	// declare variables
	double rate = 0;
	double time = 0;

	// prompt user
	std::cout << "Welcome to the DiRT calculator!" << std::endl;
	std::cout << "This calculator uses d=rt to calculate distance!" << std::endl;
	std::cout << "Please input your rate: ";

	// assign values
	std::cin >> rate;
	std::cout << "Please input your time: ";
	std::cin >> time;

	// assign value to distance using calculator function
	double distance = drtCalculator(rate, time);

	// inform user of answer
	std::cout << "Your distance is: " << distance << std::endl;
	
	//pause before closing
	system("pause");
	return 0;

}

double drtCalculator(double rate, double time)
{
	// assign variable result to user supplied rate*time and return
	double result = (rate*time);
	return result;
}