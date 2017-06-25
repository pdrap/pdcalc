#include <iostream>
#include <string>

#include <readline/history.h>
#include <readline/readline.h>
#include "lexer.h"


/* A static variable for holding the line. */
static char *line_read = (char *) NULL;

/* Read a string, and return a pointer to it.  Returns NULL on EOF. */
char *rl_gets(void) {
	/* If the buffer has already been allocated, return the memory
	 to the free pool. */
	if (line_read) {
		free(line_read);
		line_read = (char *) NULL;
	}

	/* Get a line from the user. */
	line_read = readline("");

	/* If the line has any text in it, save it on the history. */
	if (line_read && *line_read)
		add_history(line_read);

	return (line_read);
}


int main () {
	Lexer lexer;

	std::cout << "Calculator v0.1" << std::endl;


	while (rl_gets()) {
		std::string line(line_read);

		std::cout << line << std::endl;
	}
	std::cout << "quit" << std::endl;
	return 0;
}
