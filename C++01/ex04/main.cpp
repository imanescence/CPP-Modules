/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:00:44 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/17 14:26:32 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void errorHandle(int flag, int exitType)
{
	if 	(flag == NB_ARG)
		std::cerr << "Wrong number of arguments" << std::endl;

	else if (flag == EMPTY_ARGS)
		std::cerr << "You must provide a name of existing file, and 2 strings" << std::endl;

	else if (flag == EMPTY_STR)
		std::cout << "Nothing to replace or propose as a remplacement so .replace file not created and original file not modified" << std::endl;
	else if (flag == CANT_OPEN)
		std::cerr << "Unable to read the file, check if the file really exists or the rights granted to it" << std::endl;


	if (exitType == EXIT_FAILURE)
		exit (EXIT_FAILURE);

	else if (exitType == EXIT_SUCCESS)
		exit (EXIT_SUCCESS);
}

void eraseAndInsert(std::string& line, size_t pos, size_t n, const std::string& newContent)
{
	// erase the keyword found from the occurence
	line.erase(pos, n);

	// insert the new content for the remplacement
	line.insert(pos, newContent);
}

void createAndWrite(std::string& line, const char *fileName)
{
	std::string newFileName(fileName);
	newFileName.append(".replace");
	// open and create a newfile with write right
	std::ofstream fileWrite(newFileName.c_str());
	if (!fileWrite)
		errorHandle(CANT_OPEN, EXIT_FAILURE);

	// write the line in the file
	fileWrite << line << std::endl;
	fileWrite.close();
}

void readAndSearch(const char *fileName, const char *toReplace, const char *newContent)
{
	// open the file
	std::ifstream fileRead(fileName);
	if (!fileRead)
		errorHandle(CANT_OPEN, EXIT_FAILURE);

	std::string line;
	std::string modifiedContent;
	size_t pos;
	// read the file line by line
	
	while (std::getline(fileRead, line)) {
	// search the word with find()
	// if the position is valid, the word is found
		while ((pos = line.find(toReplace)) != std::string::npos) {
			eraseAndInsert(line, pos, strlen(toReplace), newContent);
			pos += strlen(newContent);
		}
		if (!modifiedContent.empty())
			modifiedContent += "\n";
		modifiedContent += line;
	}

	fileRead.close();
	if (!modifiedContent.empty())
		createAndWrite(modifiedContent, fileName);
}

int main(int argc, char **argv)
{
	// basic parsing
	if (argc != 4)
		errorHandle(NB_ARG, EXIT_FAILURE);
	if (argv[1] == NULL || argv[1][0] == '\0')
		errorHandle(EMPTY_ARGS, EXIT_FAILURE);
	if (argv[2] == NULL || argv[2][0] == '\0')
		errorHandle(EMPTY_STR, EXIT_SUCCESS);
	if (!argv[3])
		errorHandle(EMPTY_STR, EXIT_SUCCESS);
	
	// function calling to open file
	readAndSearch(argv[1], argv[2], argv[3]);
	
}
