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
	
class IntInput : public InputControl
	{			
		private:
			void Cancella();
			
		public:
			IntInput();
			double Input(int = 6);
	};
	
class FloatInput : public InputControl
	{			
		private:
			int posizionePunto;
			bool punto;
			void SetDot();
			void DotPrint();
			inline bool IsDotKey(int);
			void Cancella();
			
		public:
			FloatInput();
			double Input(int = 6);
	};
