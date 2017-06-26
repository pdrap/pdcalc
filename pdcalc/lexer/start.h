#pragma once

#include <string>

#include "lexer.h"

class Start: public Lexer {

public:
	Start(void);
	Start(const Start &) = delete;
	virtual ~Start(void) = default;
};
