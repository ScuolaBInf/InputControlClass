#include <conio.h>
#include <iostream>
#include <math.h>
#include "InputControl.h"
#define ARRAYRISULTATICONTROL 15
	
namespace inp
	{
		InputControl::InputControl()
			{
				this -> arrayRisultati = new int[ARRAYRISULTATICONTROL];
				this -> i = 0;
				this -> InizializateIntArray(arrayRisultati, ARRAYRISULTATICONTROL);
			}
		
		void InputControl::Cancella()
			{
				return;
			}
			
		double InputControl::Input(int limiteCifre)
			{
				return 0;
			}
		
		void InputControl::InizializateIntArray(int* array, int dimensione)
			{
				for (int i = 0; i < dimensione; i++)
					array[i] = 0;	
			}
			
		bool InputControl::IsFigure()
			{
				if (this -> carattereInput >= 48 && this -> carattereInput <= 57)
					return true;
				else
					return false;
			}
			
		bool InputControl::LimitSign(int limiteCifre)
			{
				if (this -> i < limiteCifre)	
					return true;
				else
					return false;
			}
				
		void InputControl::ConvertInSignAndPrint()
			{
				this -> i++;
				this -> arrayRisultati[this -> i] = carattereInput - 48;
				std::cout << arrayRisultati[this -> i];			
			}	
			
		bool InputControl::IsCancelKey()
			{
				if (this -> carattereInput == '\b' && this -> i != 0)
					return true;
				else
					return false;
			}
			
		void InputControl::CalcoloNumero(int i)
			{
				int moltiplicatore = 1;
				do
					{
						numeroOutput = numeroOutput + arrayRisultati[i] * moltiplicatore;
						moltiplicatore = moltiplicatore * 10;
						i--;
					}
				while (i > 0);
			}
		
		bool InputControl::ExitCondition()
			{
				if (this -> carattereInput != '\r' || (this -> i == 0 && this -> numeroOutput == 0))
					return true;
				else
					return false;
			}
	}
