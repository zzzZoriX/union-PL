/**
 * @file tokens.h
 * @author anyvvaay
 * @brief the header file writed special for all work with tokens
 * @version 0.1
 * @date 2025-07-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <string>
#include "lexemes.h"

class 
tokens_header {
private:
    class 
    token{
    public: 
        std::string data;
        lexemes lex;
        token* next_token;

        token() noexcept {
            data = nullptr;
            lex = lexemes::LEX_NOTHING_OT;
            next_token = nullptr;
        }

        token(const std::string& data, const lexemes lex) noexcept 
        : data(data), lex(lex) { next_token = nullptr; }

        void
        free(){
            data = nullptr;
            lex = lexemes::LEX_NOTHING_OT;
        }

        bool operator != (const token& other){
            return
                other.data != data &&
                other.lex != lex
            ;
        }

        bool operator == (const token& other){
            return
                other.data == data &&
                other.lex == lex
            ;
        }
    };

    token
        first,
        last,
        iter
    ;
    int count;

public:
    tokens_header() noexcept {
        last = token();
        iter = token();

        first = token();
        first.next_token = &last;
        count = 0;
    }

    void
    append(const std::string& data, const lexemes lex){
        token new_token = token(data, lex);
        
        if(first == token()){
            first = new_token;
            first.next_token = &last;
        }
        else{
            last.next_token = &new_token;
            last = new_token;
        }
    }

    token*
    get_all(){
        if(iter == last)
            return &last;

        token* to_return = &iter;
        iter = *iter.next_token;

        return to_return;
    }
};