/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ASC = 258,
     DESC = 259,
     DASH = 260,
     LT = 261,
     GT = 262,
     LBRACKET = 263,
     RBRACKET = 264,
     LPAREN = 265,
     RPAREN = 266,
     COLON = 267,
     PIPE = 268,
     COMMA = 269,
     SEMICOLON = 270,
     LBRACE = 271,
     RBRACE = 272,
     ASTERISK = 273,
     DOT = 274,
     MATCH = 275,
     ON = 276,
     WHERE = 277,
     WITH = 278,
     ORDER = 279,
     BY = 280,
     SKIP = 281,
     LIMIT = 282,
     RETURN = 283,
     AS = 284,
     AND = 285,
     OR = 286,
     XOR = 287,
     NOT = 288,
     exit_command = 289,
     INTEGER = 290,
     IDENTIFIER = 291,
     STRING = 292,
     COMPARATOR = 293,
     UNKNOWN = 294,
     ARROW = 295
   };
#endif
/* Tokens.  */
#define ASC 258
#define DESC 259
#define DASH 260
#define LT 261
#define GT 262
#define LBRACKET 263
#define RBRACKET 264
#define LPAREN 265
#define RPAREN 266
#define COLON 267
#define PIPE 268
#define COMMA 269
#define SEMICOLON 270
#define LBRACE 271
#define RBRACE 272
#define ASTERISK 273
#define DOT 274
#define MATCH 275
#define ON 276
#define WHERE 277
#define WITH 278
#define ORDER 279
#define BY 280
#define SKIP 281
#define LIMIT 282
#define RETURN 283
#define AS 284
#define AND 285
#define OR 286
#define XOR 287
#define NOT 288
#define exit_command 289
#define INTEGER 290
#define IDENTIFIER 291
#define STRING 292
#define COMPARATOR 293
#define UNKNOWN 294
#define ARROW 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 59 "cypher.y"
{
    char* str_val;
    int int_val;
    bool bool_val;
    struct edge_pattern* pat;
    struct map_pair* pair;
}
/* Line 1529 of yacc.c.  */
#line 137 "cypher.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

