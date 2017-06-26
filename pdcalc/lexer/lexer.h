#pragma once

#include <string>
#include <vector>

enum class Lexstate {
	START,

	END
};

class Lexer {


public:
	Lexer(void);
	Lexer(const Lexer &) = delete;
	virtual ~Lexer(void);

	// process an input line. Return position of error.
	int lex(std::string s);

protected:
	std::vector<std::pair<std::string, Lexstate> > tokens;
	Lexstate state;
	std::string line;
	std::string tokentext;
	size_t pos;

	// initialize the lexer - called from start state
	void initialize(std::string &line);

	// return the current char
	char getchar(void);

	// accept the current buffer and token
	void accept(void);


	// peek at the next character
	char lookahead(void);


};
