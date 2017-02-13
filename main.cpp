#include <iostream>
#include"InputControl.h"

using namespace std;

main() 
	{
		InputControl* input = new FloatInput;
		cout << endl << input -> Input();
	}
