#include<iostream>
#include <conio.h>
#include "InputControl.h"

namespace inp
	{
		Int::Int()
			{
				return;
			}
		
		double Int::Input(int limiteCifre)
			{
				do
					{
						this -> carattereInput = getch();
						if	(IsFigure() && LimitSign(limiteCifre))
							ConvertInSignAndPrint();	
						else if (IsCancelKey())
							Cancella();
						else if (IsSignKey())
							SignPrint();
					}
				while (ExitCondition());
				CalcoloNumero(this -> i);	
				return (numeroOutput);	
			}
			
		void Int::Cancella()
			{
				std::cout << '\b' << ' ' << '\b';
				if (segnoNegativo && i == 0)
					segnoNegativo = false;
				else
					CancellaSign();
			}
	}
