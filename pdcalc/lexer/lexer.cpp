#include <string>
#include <stdexcept>
#include <vector>

#include "lexer.h"
#include "start.h"

Lexer::Lexer(void) {

}

Lexer::~Lexer(void) {

}

void Lexer::init(void) {
	tokens.clear();
	tokentext.clear();
	state = Lexstate::START;
	pos = 0;
}

int Lexer::lex(std::string s) {

	line = s;
	pos = 0;

	Start();

	return 0;
}

char Lexer::getchar(void) {
	try {
		return line.at(pos);
	} catch (const std::out_of_range &e) {
		return 0;
	}
}

void Lexer::accept(void) {

	tokens.push_back(std::make_pair(tokentext, state));

	pos += tokentext.size();
	tokentext.clear();

}

char Lexer::lookahead(void) {
	try {
		return line.at(pos + 1);
	} catch (const std::out_of_range &e) {
		return 0;
	}
}

