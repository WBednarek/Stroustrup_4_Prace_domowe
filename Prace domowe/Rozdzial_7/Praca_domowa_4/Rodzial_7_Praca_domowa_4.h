#pragma once
#include "../../stdafx.h"
#include "../../std_lib_facilities_v2.h"
#include "Token.h"
#include "Variable.h"
#include "Token_stream.h"
#include "Database.h"
#include "Symbol_table.h"



void praca_domowa_R7_4();
void calculation();
double expression();
double term();
double statement();
double primary();
void clean_up_mess();
bool is_integer(double to_check);
double declare_variable();

namespace my {
	double pow(double x, double i); // Power of function pow(x,i) where, x - base; i - exponent
	double pow_int(double x, double i); // Power of function pow(x, i) for integers only
	double pow_negative_exponent(double x, double i);
}
