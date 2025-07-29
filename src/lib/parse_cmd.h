/**
 * @file parse_cmd.h
 * @author anyvvaay
 * @brief the header file special for call command
 * @version 0.1
 * @date 2025-07-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <cstring>

enum class 
parse_returns {
    PARSE_SUCCESS,
    SHOW_VERSION
};

parse_returns
parse_cmd(const int, char**);