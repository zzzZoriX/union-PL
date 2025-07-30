/**
 * @file lexer.h
 * @author anyvvaay
 * @brief the header for lexer and all work with it
 * @version 0.1
 * @date 2025-07-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include "lexemes.h"
#include "tokens.h"

#include <fstream>
#include <string>

/**
 * @brief the lexer function
 * 
 * @return tokens_header* 
 */
tokens_header*
lexer(std::ifstream);