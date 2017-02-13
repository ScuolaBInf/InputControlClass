#include <iostream>
#include <conio.h>
#include <math.h>
#include "InputControl.h"

namespace inp
	{
		Float::Float()
			{
				this -> punto = false;
				this -> posizionePunto = 0;		
			}
		
		double Float::Input(int limiteCifre)
			{
				do
					{
						carattereInput = getch();
						if	(IsFigure() && LimitSign(limiteCifre))
							ConvertInSignAndPrint();
						else if (IsCancelKey())
							Cancella();
						else if (IsDotKey(limiteCifre))
							SetDot();
					}
				while (ExitCondition());		
				CalcoloNumero(this -> i);		
				DotPrint();	
				return (numeroOutput);
			}
			
		bool Float::IsDotKey(int limiteCifre)
			{
				if (carattereInput == '.' && i != 0 && i < limiteCifre - 1 && punto == false)
					return true;
				else
					return false;
			}
						
		void Float::SetDot()
			{
				std::cout << '.';
				punto = true;
				posizionePunto = i;		
			}
			
		void Float::DotPrint()
			{
				if (punto)
					numeroOutput /= pow(10, i - posizionePunto);
			}

		void Float::Cancella()
			{
				std::cout << '\b' << ' ' << '\b';
				if (posizionePunto == i && punto == true)
					punto = false;
				else
					{
						this -> arrayRisultati[this -> i] = 0;
						this -> i--;
					}		
			}
	}
