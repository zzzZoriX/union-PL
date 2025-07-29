/**
 * @file lexemes.h
 * @author anyvvaay
 * @brief the header file in which will be all lexemes
 * @version 0.1
 * @date 2025-07-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#define _OOP_PS "__OOP__"
#define _PRC_PS "__PRC__"
#define _FUN_PS "__FUN__"
#define _PRIVATE_OOP "private:"
#define _PROTECTED_OOP "protected:"
#define _PUBLIC_OOP "public:"
#define _INT_DT "int"
#define _CHR_DT "chr"
#define _FLT_DT "flt"
#define _BLN_DT "bln"
#define _FUN_KW "fun"
#define _CLS_KW "cls"
#define _VAR_KW "var"
#define _OUT_KW "out"
#define _INP_KW "inp"
#define _FOR_KW "for"
#define _RET_KW "ret"
#define _END_KW "end"
#define _ASSIGN_SS "<=" 
#define _EQ_SS "?="
#define _NEQ_SS "?!="
#define _LE_SS "=>"
#define _GE_SS "=<"
#define _OR_SS "||"
#define _AND_SS "&&"
#define _SEMIC_SC ";"
#define _L_SS "<"
#define _G_SS ">"
#define _LPAREN_SC "("
#define _RPAREN_SC ")"
#define _LQPAREN_SC "["
#define _RQPAREN_SC "]"
#define _LFPAREN_SC "{"
#define _RFPAREN_SC "}"
#define _COMMA_SC ","
#define _QUOTE_SC "'"
#define _DBL_QUOTE_SC "\""
#define _PASS_OT "..."

enum class
lexemes {
// PARADIGMA SWITCHERS
    LEX_OOP_PS,
    LEX_PRC_PS,
    LEX_FUN_PS,

// OOP
    LEX_PRIVATE_OOP,
    LEX_PROTECTED_OOP,
    LEX_PUBLIC_OOP,

// DATA TYPES
    LEX_INT_DT,
    LEX_CHR_DT,
    LEX_FLT_DT,
    LEX_BLN_DT,

// KEYWORDS
    LEX_FUN_KW,
    LEX_CLS_KW,
    LEX_VAR_KW,
    LEX_OUT_KW,
    LEX_INP_KW,
    LEX_FOR_KW,
    LEX_RET_KW,
    LEX_END_KW,

// SPECIFIC STRINGS
    LEX_ASSIGN_SS,
    LEX_EQ_SS,
    LEX_NEQ_SS,
    LEX_LE_SS,
    LEX_GE_SS,
    LEX_OR_SS,
    LEX_AND_SS,

// SPECIFIC SYMBOLS ( CHARS )
    LEX_SEMIC_SC,
    LEX_L_SS,
    LEX_G_SS,
    LEX_LPAREN_SC,
    LEX_RPAREN_SC,
    LEX_LQPAREN_SC,
    LEX_RQPAREN_SC,
    LEX_LFPAREN_SC,
    LEX_RFPAREN_SC,
    LEX_COMMA_SC,
    LEX_QUOTE_SC,
    LEX_DBL_QUOTE_SC,

// OTHER
    LEX_OBJ_NAME_OT,
    LEX_VALUE_OT,
    LEX_PASS_OT
};