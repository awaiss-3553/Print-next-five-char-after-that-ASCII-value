#include <iostream>
using namespace std;
int main() {
	
	int ascii;
	cout<<"Enter Ascii Value: ";
	cin>>ascii;
	for(int i=0; i<5; i++){
		ascii++;
		cout<<(char)ascii<<" ";
	}	
	return 0;
}
