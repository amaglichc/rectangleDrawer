using namespace std;
#include <iostream>

int main(){
	int width, height;
	char chr;
	cout << "input a width:";
	cin >> width;
	cout << "input a height:";
	cin >> height;
	cout << "input a char:";
	cin >> chr;
	for (int i = 0; i<height; i++) {
		for (int j=0; j<width; j++) {
			cout << chr;  
		}
		cout<<""<<endl;
	}
} 