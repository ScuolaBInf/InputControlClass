#include<iostream>
#include <conio.h>
#include "InputControl.h"

IntInput::IntInput()
	{
		return;
	}

double IntInput::Input(int limiteCifre)
	{
		do
			{
				this -> carattereInput = getch();
				if	(IsFigure() && LimitSign(limiteCifre))
					ConvertInSignAndPrint();	
				else if (IsCancelKey())
					Cancella();
			}
		while (ExitCondition());
		CalcoloNumero(this -> i);	
		return (numeroOutput);	
	}
	
void IntInput::Cancella()
	{
		std::cout << '\b' << ' ' << '\b';
		this -> arrayRisultati[this -> i] = 0;
		this -> i--;		
	}
