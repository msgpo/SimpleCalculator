#ifndef __ScientificCalculator__
#define __ScientificCalculator__

/**
@file
Subclass of mainCalculator, which is generated by wxFormBuilder.
*/

#include "Calculator.h"

//// end generated include

/** Implementing mainCalculator */
class ScientificCalculator : public mainCalculator
{
	protected:
		// Handlers for mainCalculator events.
		void OnAcos( wxCommandEvent& event );
		void OnAsin( wxCommandEvent& event );
		void OnAtan( wxCommandEvent& event );
		void OnSign( wxCommandEvent& event );
		void OnLpar( wxCommandEvent& event );
		void OnRpar( wxCommandEvent& event );
		void OnSqrt( wxCommandEvent& event );
		void OnPower( wxCommandEvent& event );
		void OnClear( wxCommandEvent& event );
		void OnAcosh( wxCommandEvent& event );
		void OnAsinh( wxCommandEvent& event );
		void OnAtanh( wxCommandEvent& event );
		void OnVariable( wxCommandEvent& event );
		void OnSeven( wxCommandEvent& event );
		void OnEight( wxCommandEvent& event );
		void OnNine( wxCommandEvent& event );
		void OnPlus( wxCommandEvent& event );
		void OnBack( wxCommandEvent& event );
		void OnCos( wxCommandEvent& event );
		void OnSin( wxCommandEvent& event );
		void OnTan( wxCommandEvent& event );
		void OnConstant( wxCommandEvent& event );
		void OnFour( wxCommandEvent& event );
		void OnFive( wxCommandEvent& event );
		void OnSix( wxCommandEvent& event );
		void OnMinus( wxCommandEvent& event );
		void OnReset( wxCommandEvent& event );
		void OnCosh( wxCommandEvent& event );
		void OnSinh( wxCommandEvent& event );
		void OnTanh( wxCommandEvent& event );
		void OnComma( wxCommandEvent& event );
		void OnOne( wxCommandEvent& event );
		void OnTwo( wxCommandEvent& event );
		void OnThree( wxCommandEvent& event );
		void OnTimes( wxCommandEvent& event );
		void OnDisplay( wxCommandEvent& event );
		void OnExp( wxCommandEvent& event );
		void OnLog( wxCommandEvent& event );
		void OnLn( wxCommandEvent& event );
		void OnColon( wxCommandEvent& event );
		void OnZero( wxCommandEvent& event );
		void OnDecimal( wxCommandEvent& event );
		void OnEE( wxCommandEvent& event );
		void OnDivide( wxCommandEvent& event );
		void OnReturn( wxCommandEvent& event );
	public:
		/** Constructor */
		ScientificCalculator( wxWindow* parent );
	//// end generated class members
	
};

#endif // __ScientificCalculator__
