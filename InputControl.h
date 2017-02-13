namespace inp
	{
		class InputControl
			{
				protected:
					int i;
					char carattereInput;
					int*  arrayRisultati;
					double numeroOutput;
					
					void InizializateIntArray(int*, int);
					void CalcoloNumero(int);
					void ConvertInSignAndPrint();
					void CancellaFloat();
					bool IsFigure();
					bool LimitSign(int);
					bool IsCancelKey();
					bool ExitCondition();
					virtual void Cancella();
					
				public:
					InputControl();
					virtual double Input(int = 6);
			};
			
		class Int : public InputControl
			{			
				private:
					void Cancella();
					
				public:
					Int();
					double Input(int = 6);
			};
			
		class Float : public InputControl
			{			
				private:
					int posizionePunto;
					bool punto;

					void SetDot();
					void DotPrint();
					void Cancella();
					bool IsDotKey(int);
					
				public:
					Float();
					double Input(int = 6);
			};		
	}

