/**
 * @file herror.h
 * @author anyvvaay
 * @brief maked for detect an errors and handle they
 * @version 0.1 
 * @date 2025-07-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

/**
 * @brief abort the program and print the exit-messsage
 * 
 */
[[noreturn]] void
abort_w_msg(const std::string, const int);