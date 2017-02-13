#include <iostream>
#include"InputControl.h"

using namespace std;

main() 
	{
		InputControl* input = new IntInput;
		cout << endl << input -> Input();
	}
