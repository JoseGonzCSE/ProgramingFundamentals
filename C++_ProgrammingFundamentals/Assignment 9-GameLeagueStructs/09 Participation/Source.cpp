
#include<iostream>

using namespace std;

struct SalesRecord {
	string buritoType;
	int amountSold;
};

void info(SalesRecord* sold, int size) {
	int count = 0;
	for (count; count < size; count++) {
		cout << "What is the Burrito type for burito  " << count + 1 << ": " << endl;
		cin >> sold[count].buritoType;
		cout << "how many were sold for Burito type " << count + 1 << ": " << endl;
		cin >> sold[count].amountSold;

	}
}

void results(SalesRecord* sold, int size) {
	int count = 0;
	cout << "The Results are the following: \n";
	for (count; count < size; count++) {
		cout << sold[count].buritoType << ": ";
		cout << sold[count].amountSold << " sold\n";
	}
}

void total(SalesRecord* sold, int size) {
	int count = 0;
	int total = 0;
	for (count; count < size; count++) {
		total += sold[count].amountSold;
	}
	cout <<"Total Burritos sold: "<< total;
}

int main(){

	SalesRecord* sold = NULL;
	int size;
	cout << "how many burito types do you have?\n";
	cin >> size;

	sold = new SalesRecord[size];
	
	info(sold, size);
	results(sold, size);
	total(sold, size);

	delete[]sold;
	sold = NULL;



	return 0;
}

