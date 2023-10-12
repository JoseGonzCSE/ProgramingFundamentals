#include <iostream>
#include <iomanip>

using namespace std;
bool toCelciusByReference(float &);

int main() {

	float temperature;

	cout << "Welcome to the temperature converter!\n";
	cout << "Please enter a temperature in Fahrenheit: ";
	cin >> temperature;

	
	bool test =toCelciusByReference(temperature);
	cout << "The equivalent Celcius is: ";
	std::cout << std::setprecision(4) << temperature << '\n';

	if (test) {
		cout << "\nThis temperature is above freezing";
	}
	else {
	cout << "\nThis temperature is below freezing";
	}

	return 0;

}

bool toCelciusByReference(float& temperature) {
	
	float fahrenheit = temperature;

	temperature = ((temperature - 32.0) * (5.0 / 9.0));

	if (fahrenheit > 32)
		return true;
	else
		return false;

}