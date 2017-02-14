#include<iostream>
#include <conio.h>
#include "InputControl.h"

namespace inp
	{
		BInt::BInt()
			{
				return;
			}
		
		double BInt::Input()
			{
				do
					{
						this -> carattereInput = getch();
						if	(IsFigure() && LimitSign(6))
							ConvertInSignAndPrint();	
						else if (IsCancelKey())
							Cancella();
					}
				while (ExitCondition());
				CalcoloNumero(this -> i);	
				return (numeroOutput);	
			}
			
		void BInt::Cancella()
			{
				std::cout << '\b' << ' ' << '\b';
				this -> arrayRisultati[this -> i] = 0;
				this -> i--;		
			}
	}
