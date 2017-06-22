#pragma once

#include <string>

class Lexer {


	enum class Lexstate {
		START,


	};

	unsigned int pos;
	unsigned int tokenpos;
	std::string token;
	//enum eToken tokentype;


public:
	Lexer ();
	~Lexer ();

	// process an input line. Return position of error.
	int lex(std::string s);

};
