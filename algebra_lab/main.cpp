﻿#include <iostream>
//#include "Sqrt.h"
//#include "Large_Number.h"
#include "large_number_pow.h"
#include "phi_and_lambda.h"
#include "Primal_1.h"
#include "Pollard_Rho.h"
#include "test_pow.h"
//#include "discrete_logarithm.cpp"
using namespace std;

int main()
{	
	{ // Tests for large_number_pow
		TestRunner tr;
		RUN_TEST(tr, TestPowNumber);
		RUN_TEST(tr, TestDecomposExp);
		RUN_TEST(tr, TestLength);
		RUN_TEST(tr, TestGcd);
	}
	//long long q;
	//cin >> q;
	//while (q)
	//{
	//	cout << "phi:" << phi(q) << endl;
	//	cout << "lambda:" << lambda(q) << endl;
	//	cin >> q;
	//}

	//cout << p_h_tests() << endl;
	Primal_1();
	long long n = 23423423423423;
	pollard_rho(n);

	return 0;
}
