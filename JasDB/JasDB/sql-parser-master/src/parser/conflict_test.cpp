/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 2 "bison_parser.y"

  // clang-format on
  /**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
  /*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 108 "conflict_test.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 38 "bison_parser.y"

  // clang-format on
  // %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 172 "conflict_test.cpp"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_HSQL_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_HSQL_error = 256,          /* error  */
    SQL_HSQL_UNDEF = 257,          /* "invalid token"  */
    SQL_IDENTIFIER = 258,          /* IDENTIFIER  */
    SQL_STRING = 259,              /* STRING  */
    SQL_FLOATVAL = 260,            /* FLOATVAL  */
    SQL_INTVAL = 261,              /* INTVAL  */
    SQL_DEALLOCATE = 262,          /* DEALLOCATE  */
    SQL_PARAMETERS = 263,          /* PARAMETERS  */
    SQL_INTERSECT = 264,           /* INTERSECT  */
    SQL_TEMPORARY = 265,           /* TEMPORARY  */
    SQL_TIMESTAMP = 266,           /* TIMESTAMP  */
    SQL_DISTINCT = 267,            /* DISTINCT  */
    SQL_NVARCHAR = 268,            /* NVARCHAR  */
    SQL_RESTRICT = 269,            /* RESTRICT  */
    SQL_TRUNCATE = 270,            /* TRUNCATE  */
    SQL_ANALYZE = 271,             /* ANALYZE  */
    SQL_BETWEEN = 272,             /* BETWEEN  */
    SQL_CASCADE = 273,             /* CASCADE  */
    SQL_COLUMNS = 274,             /* COLUMNS  */
    SQL_CONTROL = 275,             /* CONTROL  */
    SQL_DEFAULT = 276,             /* DEFAULT  */
    SQL_EXECUTE = 277,             /* EXECUTE  */
    SQL_EXPLAIN = 278,             /* EXPLAIN  */
    SQL_INTEGER = 279,             /* INTEGER  */
    SQL_NATURAL = 280,             /* NATURAL  */
    SQL_PREPARE = 281,             /* PREPARE  */
    SQL_PRIMARY = 282,             /* PRIMARY  */
    SQL_SCHEMAS = 283,             /* SCHEMAS  */
    SQL_CHARACTER_VARYING = 284,   /* CHARACTER_VARYING  */
    SQL_REAL = 285,                /* REAL  */
    SQL_DECIMAL = 286,             /* DECIMAL  */
    SQL_SMALLINT = 287,            /* SMALLINT  */
    SQL_BIGINT = 288,              /* BIGINT  */
    SQL_SPATIAL = 289,             /* SPATIAL  */
    SQL_VARCHAR = 290,             /* VARCHAR  */
    SQL_VIRTUAL = 291,             /* VIRTUAL  */
    SQL_DESCRIBE = 292,            /* DESCRIBE  */
    SQL_BEFORE = 293,              /* BEFORE  */
    SQL_COLUMN = 294,              /* COLUMN  */
    SQL_CREATE = 295,              /* CREATE  */
    SQL_DELETE = 296,              /* DELETE  */
    SQL_DIRECT = 297,              /* DIRECT  */
    SQL_DOUBLE = 298,              /* DOUBLE  */
    SQL_ESCAPE = 299,              /* ESCAPE  */
    SQL_EXCEPT = 300,              /* EXCEPT  */
    SQL_EXISTS = 301,              /* EXISTS  */
    SQL_EXTRACT = 302,             /* EXTRACT  */
    SQL_CAST = 303,                /* CAST  */
    SQL_FORMAT = 304,              /* FORMAT  */
    SQL_GLOBAL = 305,              /* GLOBAL  */
    SQL_HAVING = 306,              /* HAVING  */
    SQL_IMPORT = 307,              /* IMPORT  */
    SQL_INSERT = 308,              /* INSERT  */
    SQL_ISNULL = 309,              /* ISNULL  */
    SQL_OFFSET = 310,              /* OFFSET  */
    SQL_RENAME = 311,              /* RENAME  */
    SQL_SCHEMA = 312,              /* SCHEMA  */
    SQL_SELECT = 313,              /* SELECT  */
    SQL_SORTED = 314,              /* SORTED  */
    SQL_TABLES = 315,              /* TABLES  */
    SQL_UNIQUE = 316,              /* UNIQUE  */
    SQL_UNLOAD = 317,              /* UNLOAD  */
    SQL_UPDATE = 318,              /* UPDATE  */
    SQL_VALUES = 319,              /* VALUES  */
    SQL_AFTER = 320,               /* AFTER  */
    SQL_ALTER = 321,               /* ALTER  */
    SQL_CROSS = 322,               /* CROSS  */
    SQL_DELTA = 323,               /* DELTA  */
    SQL_FLOAT = 324,               /* FLOAT  */
    SQL_GROUP = 325,               /* GROUP  */
    SQL_INDEX = 326,               /* INDEX  */
    SQL_INNER = 327,               /* INNER  */
    SQL_LIMIT = 328,               /* LIMIT  */
    SQL_LOCAL = 329,               /* LOCAL  */
    SQL_MERGE = 330,               /* MERGE  */
    SQL_MINUS = 331,               /* MINUS  */
    SQL_ORDER = 332,               /* ORDER  */
    SQL_OUTER = 333,               /* OUTER  */
    SQL_RIGHT = 334,               /* RIGHT  */
    SQL_TABLE = 335,               /* TABLE  */
    SQL_UNION = 336,               /* UNION  */
    SQL_USING = 337,               /* USING  */
    SQL_WHERE = 338,               /* WHERE  */
    SQL_CALL = 339,                /* CALL  */
    SQL_CASE = 340,                /* CASE  */
    SQL_CHAR = 341,                /* CHAR  */
    SQL_COPY = 342,                /* COPY  */
    SQL_DATE = 343,                /* DATE  */
    SQL_DATETIME = 344,            /* DATETIME  */
    SQL_DESC = 345,                /* DESC  */
    SQL_DROP = 346,                /* DROP  */
    SQL_ELSE = 347,                /* ELSE  */
    SQL_FILE = 348,                /* FILE  */
    SQL_FROM = 349,                /* FROM  */
    SQL_FULL = 350,                /* FULL  */
    SQL_HASH = 351,                /* HASH  */
    SQL_HINT = 352,                /* HINT  */
    SQL_INTO = 353,                /* INTO  */
    SQL_JOIN = 354,                /* JOIN  */
    SQL_LEFT = 355,                /* LEFT  */
    SQL_LIKE = 356,                /* LIKE  */
    SQL_LOAD = 357,                /* LOAD  */
    SQL_LONG = 358,                /* LONG  */
    SQL_NULL = 359,                /* NULL  */
    SQL_PLAN = 360,                /* PLAN  */
    SQL_SHOW = 361,                /* SHOW  */
    SQL_TEXT = 362,                /* TEXT  */
    SQL_THEN = 363,                /* THEN  */
    SQL_TIME = 364,                /* TIME  */
    SQL_VIEW = 365,                /* VIEW  */
    SQL_WHEN = 366,                /* WHEN  */
    SQL_WITH = 367,                /* WITH  */
    SQL_ADD = 368,                 /* ADD  */
    SQL_ALL = 369,                 /* ALL  */
    SQL_AND = 370,                 /* AND  */
    SQL_ASC = 371,                 /* ASC  */
    SQL_END = 372,                 /* END  */
    SQL_FOR = 373,                 /* FOR  */
    SQL_INT = 374,                 /* INT  */
    SQL_KEY = 375,                 /* KEY  */
    SQL_NOT = 376,                 /* NOT  */
    SQL_OFF = 377,                 /* OFF  */
    SQL_SET = 378,                 /* SET  */
    SQL_TOP = 379,                 /* TOP  */
    SQL_AS = 380,                  /* AS  */
    SQL_BY = 381,                  /* BY  */
    SQL_IF = 382,                  /* IF  */
    SQL_IN = 383,                  /* IN  */
    SQL_IS = 384,                  /* IS  */
    SQL_OF = 385,                  /* OF  */
    SQL_ON = 386,                  /* ON  */
    SQL_OR = 387,                  /* OR  */
    SQL_TO = 388,                  /* TO  */
    SQL_NO = 389,                  /* NO  */
    SQL_ARRAY = 390,               /* ARRAY  */
    SQL_CONCAT = 391,              /* CONCAT  */
    SQL_ILIKE = 392,               /* ILIKE  */
    SQL_SECOND = 393,              /* SECOND  */
    SQL_MINUTE = 394,              /* MINUTE  */
    SQL_HOUR = 395,                /* HOUR  */
    SQL_DAY = 396,                 /* DAY  */
    SQL_MONTH = 397,               /* MONTH  */
    SQL_YEAR = 398,                /* YEAR  */
    SQL_SECONDS = 399,             /* SECONDS  */
    SQL_MINUTES = 400,             /* MINUTES  */
    SQL_HOURS = 401,               /* HOURS  */
    SQL_DAYS = 402,                /* DAYS  */
    SQL_MONTHS = 403,              /* MONTHS  */
    SQL_YEARS = 404,               /* YEARS  */
    SQL_INTERVAL = 405,            /* INTERVAL  */
    SQL_TRUE = 406,                /* TRUE  */
    SQL_FALSE = 407,               /* FALSE  */
    SQL_BOOLEAN = 408,             /* BOOLEAN  */
    SQL_TRANSACTION = 409,         /* TRANSACTION  */
    SQL_BEGIN = 410,               /* BEGIN  */
    SQL_COMMIT = 411,              /* COMMIT  */
    SQL_ROLLBACK = 412,            /* ROLLBACK  */
    SQL_NOWAIT = 413,              /* NOWAIT  */
    SQL_SKIP = 414,                /* SKIP  */
    SQL_LOCKED = 415,              /* LOCKED  */
    SQL_SHARE = 416,               /* SHARE  */
    SQL_EQUALS = 417,              /* EQUALS  */
    SQL_NOTEQUALS = 418,           /* NOTEQUALS  */
    SQL_LESS = 419,                /* LESS  */
    SQL_GREATER = 420,             /* GREATER  */
    SQL_LESSEQ = 421,              /* LESSEQ  */
    SQL_GREATEREQ = 422,           /* GREATEREQ  */
    SQL_NOTNULL = 423,             /* NOTNULL  */
    SQL_UMINUS = 424               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 98 "bison_parser.y"

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WithDescription* with_description_t;
  hsql::LockingClause* locking_t;

  std::vector<char*>* str_vec;
  std::unordered_set<hsql::ConstraintType>* column_constraint_set;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;
  std::vector<hsql::LockingClause*>* locking_clause_vec;

  std::pair<int64_t, int64_t>* ival_pair;

  hsql::RowLockMode lock_mode_t;
  hsql::RowLockWaitPolicy lock_wait_policy_t;

#line 422 "conflict_test.cpp"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif




int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_INTEGER = 24,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 25,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 26,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 27,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 28,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER_VARYING = 29,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 30,                      /* REAL  */
  YYSYMBOL_DECIMAL = 31,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 32,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 33,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 34,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 35,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 36,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 37,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 38,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 39,                    /* COLUMN  */
  YYSYMBOL_CREATE = 40,                    /* CREATE  */
  YYSYMBOL_DELETE = 41,                    /* DELETE  */
  YYSYMBOL_DIRECT = 42,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 43,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 44,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 45,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 46,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 47,                   /* EXTRACT  */
  YYSYMBOL_CAST = 48,                      /* CAST  */
  YYSYMBOL_FORMAT = 49,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 50,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 51,                    /* HAVING  */
  YYSYMBOL_IMPORT = 52,                    /* IMPORT  */
  YYSYMBOL_INSERT = 53,                    /* INSERT  */
  YYSYMBOL_ISNULL = 54,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 55,                    /* OFFSET  */
  YYSYMBOL_RENAME = 56,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 57,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 58,                    /* SELECT  */
  YYSYMBOL_SORTED = 59,                    /* SORTED  */
  YYSYMBOL_TABLES = 60,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 61,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 62,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 63,                    /* UPDATE  */
  YYSYMBOL_VALUES = 64,                    /* VALUES  */
  YYSYMBOL_AFTER = 65,                     /* AFTER  */
  YYSYMBOL_ALTER = 66,                     /* ALTER  */
  YYSYMBOL_CROSS = 67,                     /* CROSS  */
  YYSYMBOL_DELTA = 68,                     /* DELTA  */
  YYSYMBOL_FLOAT = 69,                     /* FLOAT  */
  YYSYMBOL_GROUP = 70,                     /* GROUP  */
  YYSYMBOL_INDEX = 71,                     /* INDEX  */
  YYSYMBOL_INNER = 72,                     /* INNER  */
  YYSYMBOL_LIMIT = 73,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 74,                     /* LOCAL  */
  YYSYMBOL_MERGE = 75,                     /* MERGE  */
  YYSYMBOL_MINUS = 76,                     /* MINUS  */
  YYSYMBOL_ORDER = 77,                     /* ORDER  */
  YYSYMBOL_OUTER = 78,                     /* OUTER  */
  YYSYMBOL_RIGHT = 79,                     /* RIGHT  */
  YYSYMBOL_TABLE = 80,                     /* TABLE  */
  YYSYMBOL_UNION = 81,                     /* UNION  */
  YYSYMBOL_USING = 82,                     /* USING  */
  YYSYMBOL_WHERE = 83,                     /* WHERE  */
  YYSYMBOL_CALL = 84,                      /* CALL  */
  YYSYMBOL_CASE = 85,                      /* CASE  */
  YYSYMBOL_CHAR = 86,                      /* CHAR  */
  YYSYMBOL_COPY = 87,                      /* COPY  */
  YYSYMBOL_DATE = 88,                      /* DATE  */
  YYSYMBOL_DATETIME = 89,                  /* DATETIME  */
  YYSYMBOL_DESC = 90,                      /* DESC  */
  YYSYMBOL_DROP = 91,                      /* DROP  */
  YYSYMBOL_ELSE = 92,                      /* ELSE  */
  YYSYMBOL_FILE = 93,                      /* FILE  */
  YYSYMBOL_FROM = 94,                      /* FROM  */
  YYSYMBOL_FULL = 95,                      /* FULL  */
  YYSYMBOL_HASH = 96,                      /* HASH  */
  YYSYMBOL_HINT = 97,                      /* HINT  */
  YYSYMBOL_INTO = 98,                      /* INTO  */
  YYSYMBOL_JOIN = 99,                      /* JOIN  */
  YYSYMBOL_LEFT = 100,                     /* LEFT  */
  YYSYMBOL_LIKE = 101,                     /* LIKE  */
  YYSYMBOL_LOAD = 102,                     /* LOAD  */
  YYSYMBOL_LONG = 103,                     /* LONG  */
  YYSYMBOL_NULL = 104,                     /* NULL  */
  YYSYMBOL_PLAN = 105,                     /* PLAN  */
  YYSYMBOL_SHOW = 106,                     /* SHOW  */
  YYSYMBOL_TEXT = 107,                     /* TEXT  */
  YYSYMBOL_THEN = 108,                     /* THEN  */
  YYSYMBOL_TIME = 109,                     /* TIME  */
  YYSYMBOL_VIEW = 110,                     /* VIEW  */
  YYSYMBOL_WHEN = 111,                     /* WHEN  */
  YYSYMBOL_WITH = 112,                     /* WITH  */
  YYSYMBOL_ADD = 113,                      /* ADD  */
  YYSYMBOL_ALL = 114,                      /* ALL  */
  YYSYMBOL_AND = 115,                      /* AND  */
  YYSYMBOL_ASC = 116,                      /* ASC  */
  YYSYMBOL_END = 117,                      /* END  */
  YYSYMBOL_FOR = 118,                      /* FOR  */
  YYSYMBOL_INT = 119,                      /* INT  */
  YYSYMBOL_KEY = 120,                      /* KEY  */
  YYSYMBOL_NOT = 121,                      /* NOT  */
  YYSYMBOL_OFF = 122,                      /* OFF  */
  YYSYMBOL_SET = 123,                      /* SET  */
  YYSYMBOL_TOP = 124,                      /* TOP  */
  YYSYMBOL_AS = 125,                       /* AS  */
  YYSYMBOL_BY = 126,                       /* BY  */
  YYSYMBOL_IF = 127,                       /* IF  */
  YYSYMBOL_IN = 128,                       /* IN  */
  YYSYMBOL_IS = 129,                       /* IS  */
  YYSYMBOL_OF = 130,                       /* OF  */
  YYSYMBOL_ON = 131,                       /* ON  */
  YYSYMBOL_OR = 132,                       /* OR  */
  YYSYMBOL_TO = 133,                       /* TO  */
  YYSYMBOL_NO = 134,                       /* NO  */
  YYSYMBOL_ARRAY = 135,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 136,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 137,                    /* ILIKE  */
  YYSYMBOL_SECOND = 138,                   /* SECOND  */
  YYSYMBOL_MINUTE = 139,                   /* MINUTE  */
  YYSYMBOL_HOUR = 140,                     /* HOUR  */
  YYSYMBOL_DAY = 141,                      /* DAY  */
  YYSYMBOL_MONTH = 142,                    /* MONTH  */
  YYSYMBOL_YEAR = 143,                     /* YEAR  */
  YYSYMBOL_SECONDS = 144,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 145,                  /* MINUTES  */
  YYSYMBOL_HOURS = 146,                    /* HOURS  */
  YYSYMBOL_DAYS = 147,                     /* DAYS  */
  YYSYMBOL_MONTHS = 148,                   /* MONTHS  */
  YYSYMBOL_YEARS = 149,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 150,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 151,                     /* TRUE  */
  YYSYMBOL_FALSE = 152,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 153,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 154,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 155,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 156,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 157,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 158,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 159,                     /* SKIP  */
  YYSYMBOL_LOCKED = 160,                   /* LOCKED  */
  YYSYMBOL_SHARE = 161,                    /* SHARE  */
  YYSYMBOL_162_ = 162,                     /* '='  */
  YYSYMBOL_EQUALS = 163,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 164,                /* NOTEQUALS  */
  YYSYMBOL_165_ = 165,                     /* '<'  */
  YYSYMBOL_166_ = 166,                     /* '>'  */
  YYSYMBOL_LESS = 167,                     /* LESS  */
  YYSYMBOL_GREATER = 168,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 169,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 170,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 171,                  /* NOTNULL  */
  YYSYMBOL_172_ = 172,                     /* '+'  */
  YYSYMBOL_173_ = 173,                     /* '-'  */
  YYSYMBOL_174_ = 174,                     /* '*'  */
  YYSYMBOL_175_ = 175,                     /* '/'  */
  YYSYMBOL_176_ = 176,                     /* '%'  */
  YYSYMBOL_177_ = 177,                     /* '^'  */
  YYSYMBOL_UMINUS = 178,                   /* UMINUS  */
  YYSYMBOL_179_ = 179,                     /* '['  */
  YYSYMBOL_180_ = 180,                     /* ']'  */
  YYSYMBOL_181_ = 181,                     /* '('  */
  YYSYMBOL_182_ = 182,                     /* ')'  */
  YYSYMBOL_183_ = 183,                     /* '.'  */
  YYSYMBOL_184_ = 184,                     /* ';'  */
  YYSYMBOL_185_ = 185,                     /* ','  */
  YYSYMBOL_186_ = 186,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 187,                 /* $accept  */
  YYSYMBOL_input = 188,                    /* input  */
  YYSYMBOL_statement_list = 189,           /* statement_list  */
  YYSYMBOL_statement = 190,                /* statement  */
  YYSYMBOL_preparable_statement = 191,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 192,                /* opt_hints  */
  YYSYMBOL_hint_list = 193,                /* hint_list  */
  YYSYMBOL_hint = 194,                     /* hint  */
  YYSYMBOL_transaction_statement = 195,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 196,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 197,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 198,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 199,        /* execute_statement  */
  YYSYMBOL_import_statement = 200,         /* import_statement  */
  YYSYMBOL_file_type = 201,                /* file_type  */
  YYSYMBOL_file_path = 202,                /* file_path  */
  YYSYMBOL_opt_file_type = 203,            /* opt_file_type  */
  YYSYMBOL_export_statement = 204,         /* export_statement  */
  YYSYMBOL_show_statement = 205,           /* show_statement  */
  YYSYMBOL_create_statement = 206,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 207,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 208,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 209,               /* table_elem  */
  YYSYMBOL_column_def = 210,               /* column_def  */
  YYSYMBOL_column_type = 211,              /* column_type  */
  YYSYMBOL_opt_time_precision = 212,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 213, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 214,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 215,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 216,        /* column_constraint  */
  YYSYMBOL_table_constraint = 217,         /* table_constraint  */
  YYSYMBOL_drop_statement = 218,           /* drop_statement  */
  YYSYMBOL_opt_exists = 219,               /* opt_exists  */
  YYSYMBOL_alter_statement = 220,          /* alter_statement  */
  YYSYMBOL_alter_action = 221,             /* alter_action  */
  YYSYMBOL_drop_action = 222,              /* drop_action  */
  YYSYMBOL_delete_statement = 223,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 224,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 225,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 226,          /* opt_column_list  */
  YYSYMBOL_update_statement = 227,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 228,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 229,            /* update_clause  */
  YYSYMBOL_select_statement = 230,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 231, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 232, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 233,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 234,          /* select_no_paren  */
  YYSYMBOL_set_operator = 235,             /* set_operator  */
  YYSYMBOL_set_type = 236,                 /* set_type  */
  YYSYMBOL_opt_all = 237,                  /* opt_all  */
  YYSYMBOL_select_clause = 238,            /* select_clause  */
  YYSYMBOL_opt_distinct = 239,             /* opt_distinct  */
  YYSYMBOL_select_list = 240,              /* select_list  */
  YYSYMBOL_opt_from_clause = 241,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 242,              /* from_clause  */
  YYSYMBOL_opt_where = 243,                /* opt_where  */
  YYSYMBOL_opt_group = 244,                /* opt_group  */
  YYSYMBOL_opt_having = 245,               /* opt_having  */
  YYSYMBOL_opt_order = 246,                /* opt_order  */
  YYSYMBOL_order_list = 247,               /* order_list  */
  YYSYMBOL_order_desc = 248,               /* order_desc  */
  YYSYMBOL_opt_order_type = 249,           /* opt_order_type  */
  YYSYMBOL_opt_top = 250,                  /* opt_top  */
  YYSYMBOL_opt_limit = 251,                /* opt_limit  */
  YYSYMBOL_expr_list = 252,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 253,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 254,             /* literal_list  */
  YYSYMBOL_expr_alias = 255,               /* expr_alias  */
  YYSYMBOL_expr = 256,                     /* expr  */
  YYSYMBOL_operand = 257,                  /* operand  */
  YYSYMBOL_scalar_expr = 258,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 259,               /* unary_expr  */
  YYSYMBOL_binary_expr = 260,              /* binary_expr  */
  YYSYMBOL_logic_expr = 261,               /* logic_expr  */
  YYSYMBOL_in_expr = 262,                  /* in_expr  */
  YYSYMBOL_case_expr = 263,                /* case_expr  */
  YYSYMBOL_case_list = 264,                /* case_list  */
  YYSYMBOL_exists_expr = 265,              /* exists_expr  */
  YYSYMBOL_comp_expr = 266,                /* comp_expr  */
  YYSYMBOL_function_expr = 267,            /* function_expr  */
  YYSYMBOL_extract_expr = 268,             /* extract_expr  */
  YYSYMBOL_cast_expr = 269,                /* cast_expr  */
  YYSYMBOL_datetime_field = 270,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 271,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 272,           /* duration_field  */
  YYSYMBOL_array_expr = 273,               /* array_expr  */
  YYSYMBOL_array_index = 274,              /* array_index  */
  YYSYMBOL_between_expr = 275,             /* between_expr  */
  YYSYMBOL_column_name = 276,              /* column_name  */
  YYSYMBOL_literal = 277,                  /* literal  */
  YYSYMBOL_string_literal = 278,           /* string_literal  */
  YYSYMBOL_bool_literal = 279,             /* bool_literal  */
  YYSYMBOL_num_literal = 280,              /* num_literal  */
  YYSYMBOL_int_literal = 281,              /* int_literal  */
  YYSYMBOL_null_literal = 282,             /* null_literal  */
  YYSYMBOL_date_literal = 283,             /* date_literal  */
  YYSYMBOL_interval_literal = 284,         /* interval_literal  */
  YYSYMBOL_param_expr = 285,               /* param_expr  */
  YYSYMBOL_table_ref = 286,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 287,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 288, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 289,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 290,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 291,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 292,               /* table_name  */
  YYSYMBOL_opt_index_name = 293,           /* opt_index_name  */
  YYSYMBOL_table_alias = 294,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 295,          /* opt_table_alias  */
  YYSYMBOL_alias = 296,                    /* alias  */
  YYSYMBOL_opt_alias = 297,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 298,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 299,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 300,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 301,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 302,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 303,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 304,              /* with_clause  */
  YYSYMBOL_with_description_list = 305,    /* with_description_list  */
  YYSYMBOL_with_description = 306,         /* with_description  */
  YYSYMBOL_join_clause = 307,              /* join_clause  */
  YYSYMBOL_opt_join_type = 308,            /* opt_join_type  */
  YYSYMBOL_join_condition = 309,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 310,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 311           /* ident_commalist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  187
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  573

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   424


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   176,     2,     2,
     181,   182,   174,   172,   185,   173,   183,   175,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   184,
     165,   162,   166,   186,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   179,     2,   180,   177,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   163,   164,   167,
     168,   169,   170,   171,   178
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   312,   312,   331,   337,   344,   348,   352,   353,   354,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     371,   372,   374,   378,   383,   387,   397,   398,   399,   401,
     401,   407,   413,   415,   419,   430,   436,   443,   458,   463,
     464,   470,   482,   483,   488,   499,   512,   524,   531,   538,
     547,   548,   550,   554,   559,   560,   562,   569,   570,   571,
     572,   573,   574,   575,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   591,   592,   594,   595,   596,
     598,   599,   601,   605,   610,   611,   612,   613,   615,   616,
     624,   630,   636,   642,   648,   649,   656,   662,   664,   674,
     681,   692,   699,   707,   708,   715,   722,   726,   731,   741,
     745,   749,   761,   761,   763,   764,   773,   774,   776,   790,
     802,   807,   811,   815,   820,   821,   823,   833,   834,   836,
     838,   839,   841,   843,   844,   846,   851,   853,   854,   856,
     857,   859,   863,   868,   870,   871,   872,   876,   877,   879,
     880,   881,   882,   883,   884,   889,   893,   898,   899,   901,
     905,   910,   918,   918,   918,   918,   918,   920,   921,   921,
     921,   921,   921,   921,   921,   921,   922,   922,   926,   926,
     928,   929,   930,   931,   932,   934,   934,   935,   936,   937,
     938,   939,   940,   941,   942,   943,   945,   946,   948,   949,
     950,   951,   955,   956,   957,   958,   960,   961,   963,   964,
     966,   967,   968,   969,   970,   971,   972,   974,   975,   977,
     979,   981,   982,   983,   984,   985,   986,   988,   989,   990,
     991,   992,   993,   995,   995,   997,   999,  1001,  1003,  1004,
    1005,  1006,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1010,
    1012,  1013,  1015,  1016,  1018,  1020,  1022,  1033,  1037,  1048,
    1080,  1089,  1089,  1096,  1096,  1098,  1098,  1105,  1109,  1114,
    1122,  1128,  1132,  1137,  1138,  1140,  1140,  1142,  1142,  1144,
    1145,  1147,  1147,  1153,  1154,  1156,  1160,  1165,  1171,  1178,
    1179,  1180,  1181,  1183,  1184,  1185,  1191,  1191,  1193,  1195,
    1199,  1204,  1214,  1221,  1229,  1245,  1246,  1247,  1248,  1249,
    1250,  1251,  1252,  1253,  1254,  1256,  1262,  1262,  1265,  1269
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS",
  "MONTHS", "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION",
  "BEGIN", "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_set", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
  "opt_locking_clause", "opt_locking_clause_list", "locking_clause",
  "row_lock_mode", "opt_row_lock_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-432)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-317)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     594,    32,    77,    96,   133,    77,   -29,    65,    73,    80,
      77,    91,    77,   102,    29,   185,    57,    57,    57,   272,
      93,  -432,   120,  -432,   120,  -432,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,  -432,  -432,  -432,  -432,   -34,  -432,   280,
     105,  -432,   126,   219,  -432,   187,   187,   187,    77,   316,
      77,   203,  -432,   205,   -28,   205,   205,   205,    77,  -432,
     198,   145,  -432,  -432,  -432,  -432,  -432,  -432,   589,  -432,
     234,  -432,  -432,   220,   -34,   129,  -432,    53,  -432,   340,
      33,   341,   236,   361,    77,    77,   285,  -432,   294,   207,
     390,   348,    77,   391,   391,   400,    77,    77,  -432,   235,
     185,  -432,   239,   409,   410,   243,   244,  -432,  -432,  -432,
     -34,   307,   301,   -34,     6,  -432,  -432,  -432,  -432,   424,
    -432,   426,  -432,  -432,  -432,   251,   249,  -432,  -432,  -432,
    -432,   714,  -432,  -432,  -432,  -432,  -432,  -432,   392,  -432,
     306,   -54,   207,   250,  -432,   391,   436,   122,   281,   -52,
    -432,  -432,   351,   332,  -432,   332,  -432,  -432,  -432,  -432,
    -432,   442,  -432,  -432,   250,  -432,  -432,   370,  -432,  -432,
     129,  -432,  -432,   250,   370,   250,    40,   331,  -432,   161,
    -432,    33,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,    77,   447,
     339,   154,   328,    48,   273,   274,   277,   160,   344,   282,
     393,  -432,   232,   -65,   418,  -432,  -432,  -432,  -432,  -432,
    -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
    -432,   362,  -432,   139,   278,  -432,   250,   390,  -432,   423,
    -432,  -432,   417,  -432,  -432,   286,   155,  -432,   374,   284,
    -432,    17,     6,   -34,   288,  -432,   -38,     6,   -65,   415,
      20,    11,  -432,   331,  -432,  -432,  -432,   290,   381,  -432,
     634,   355,   295,   157,  -432,  -432,  -432,   339,     7,    19,
     419,   161,   250,   250,    47,   130,   302,   393,   654,   250,
     110,   300,    38,   250,   250,   393,  -432,   393,   -46,   305,
     -31,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   409,    77,  -432,   484,
      33,   -65,  -432,   205,   316,    33,  -432,   442,    15,   285,
    -432,   250,  -432,   486,  -432,  -432,  -432,  -432,   250,  -432,
    -432,  -432,   331,   250,   250,  -432,   329,   371,  -432,    46,
    -432,   436,   391,  -432,  -432,   311,  -432,   320,  -432,  -432,
     321,  -432,  -432,   323,  -432,  -432,  -432,  -432,   324,  -432,
    -432,    95,   325,   436,  -432,   154,  -432,  -432,   250,  -432,
    -432,   326,   413,   144,   134,   141,   250,   250,  -432,   419,
     411,  -126,  -432,  -432,  -432,   396,   595,   672,   393,   334,
     232,  -432,   420,   343,   672,   672,   672,   672,   186,   186,
     186,   186,   110,   110,    51,    51,    51,   -76,   347,  -432,
    -432,   184,   520,  -432,   188,  -432,   339,  -432,   385,  -432,
     349,  -432,    23,  -432,   459,  -432,  -432,  -432,  -432,   -65,
     -65,  -432,   469,   436,  -432,   373,  -432,   190,  -432,   529,
     530,  -432,   531,   532,   534,  -432,   422,  -432,  -432,   437,
    -432,    95,  -432,   436,   192,  -432,   194,  -432,   250,   634,
     250,   250,  -432,   176,   142,   366,  -432,   393,   672,   232,
     367,   196,  -432,  -432,  -432,  -432,  -432,   368,   452,  -432,
    -432,  -432,   474,   475,   478,   458,    15,   555,  -432,  -432,
    -432,   433,  -432,  -432,    66,  -432,  -432,   378,   204,   379,
     382,   383,  -432,  -432,  -432,   222,  -432,  -432,    45,   386,
     -65,   177,  -432,   250,  -432,   654,   387,   227,  -432,  -432,
      23,    15,  -432,  -432,  -432,    15,   421,   394,   250,  -432,
    -432,  -432,   557,  -432,  -432,  -432,  -432,  -432,  -432,  -432,
     -65,  -432,  -432,  -432,  -432,   431,   436,   -30,   389,   395,
     250,   229,   250,  -432,  -432,    24,   -65,  -432,  -432,   -65,
     402,   404,  -432
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     297,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     317,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   296,     0,
     271,   100,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   270,    95,     0,    95,    95,    95,     0,    42,
       0,   298,   299,    29,    26,    28,    27,     1,   297,     2,
       0,     6,     5,   148,     0,   109,   110,   140,    92,     0,
     158,     0,     0,   274,     0,     0,   134,    37,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   128,     0,     0,   122,   123,   121,
       0,   125,     0,     0,   154,   272,   249,   252,   254,     0,
     255,     0,   250,   251,   260,     0,   157,   159,   242,   243,
     244,   253,   245,   246,   247,   248,    32,    31,     0,   273,
       0,     0,   104,     0,    99,     0,     0,     0,     0,   134,
     106,    94,     0,    40,    38,    40,    93,    90,    91,   301,
     300,     0,   147,   127,     0,   117,   116,   140,   113,   112,
     114,   124,   120,     0,   140,     0,     0,   284,   256,   259,
      34,     0,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   257,    50,     0,     0,
     297,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,   240,     0,   133,   162,   169,   170,   171,   164,   166,
     172,   165,   185,   173,   174,   175,   176,   168,   163,   178,
     179,     0,   318,     0,     0,   102,     0,     0,   105,     0,
      96,    97,     0,    36,    41,    24,     0,    22,   131,   129,
     155,   282,   154,     0,   139,   141,   146,   154,   150,   152,
     149,     0,   118,   283,   285,   258,   160,     0,     0,    47,
       0,     0,     0,     0,    52,    54,    55,   297,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,     0,
     180,     0,     0,     0,     0,     0,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,     0,
       0,   108,   107,    95,     0,     0,    20,     0,     0,   134,
     130,     0,   280,     0,   281,   161,   111,   115,     0,   145,
     144,   143,   284,     0,     0,   289,     0,     0,   291,   295,
     286,     0,     0,    73,    67,     0,    69,    79,    70,    57,
       0,    64,    65,     0,    61,    62,    68,    71,    76,    66,
      58,    81,     0,     0,    46,     0,    49,   217,     0,   239,
     241,     0,     0,     0,     0,     0,     0,     0,   204,     0,
       0,     0,   177,   167,   196,   197,     0,   192,     0,     0,
       0,   183,     0,   195,   194,   210,   211,   212,   213,   214,
     215,   216,   187,   186,   189,   188,   190,   191,     0,    35,
     319,     0,     0,    39,     0,    23,   297,   132,   261,   263,
       0,   265,   278,   264,   136,   156,   279,   142,   119,   153,
     151,   292,     0,     0,   294,     0,   287,     0,    45,     0,
       0,    63,     0,     0,     0,    72,     0,    85,    86,     0,
      56,    80,    82,     0,     0,    53,     0,   208,     0,     0,
       0,     0,   202,     0,     0,     0,   235,     0,   193,     0,
       0,     0,   184,   236,   101,    98,    25,     0,     0,   313,
     305,   311,   309,   312,   307,     0,     0,     0,   277,   269,
     275,     0,   126,   290,   295,   293,    48,     0,     0,     0,
       0,     0,    84,    87,    83,     0,    89,   218,     0,     0,
     206,     0,   205,     0,   209,   237,     0,     0,   200,   198,
     278,     0,   308,   310,   306,     0,   262,   279,     0,   288,
      60,    78,     0,    74,    59,    75,    88,   219,   220,   203,
     207,   201,   199,   266,   302,   314,     0,   138,     0,     0,
       0,     0,     0,   135,    77,     0,   315,   303,   276,   137,
     238,     0,   304
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -432,  -432,  -432,   504,  -432,   549,  -432,   271,  -432,   200,
    -432,  -432,  -432,  -432,   253,   -92,   444,  -432,  -432,  -432,
     259,  -432,   225,  -432,   109,  -432,  -432,  -432,  -432,   146,
    -432,  -432,   -50,  -432,  -432,  -432,  -432,  -432,  -432,   460,
    -432,  -432,   375,  -192,   -84,  -432,    -2,   -71,   -41,  -432,
    -432,   -85,   327,  -432,  -432,  -432,  -135,  -432,  -432,  -104,
    -432,   265,  -432,  -432,    10,  -277,  -432,   -55,   279,  -143,
    -195,  -432,  -432,  -432,  -432,  -432,  -432,   330,  -432,  -432,
    -432,  -432,  -432,  -138,  -432,  -432,  -432,  -432,  -432,    43,
     -57,   -77,  -432,  -432,   -93,  -432,  -432,  -432,  -432,  -432,
    -431,    82,  -432,  -432,  -432,    -1,  -432,  -432,    87,   372,
    -432,   276,  -432,   356,  -432,   117,  -432,  -432,  -432,   522,
    -432,  -432,  -432,  -432,  -317
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   246,   247,    23,    64,
      24,   137,    25,    26,    88,   153,   243,    27,    28,    29,
      83,   273,   274,   275,   371,   455,   451,   460,   461,   462,
     276,    30,    92,    31,   240,   241,    32,    33,    34,   147,
      35,   149,   150,    36,   167,   168,   169,    76,   110,   111,
     172,    77,   164,   248,   329,   330,   144,   502,   563,   114,
     254,   255,   341,   104,   177,   249,   125,   126,   250,   251,
     214,   215,   216,   217,   218,   219,   220,   285,   221,   222,
     223,   224,   225,   194,   195,   196,   226,   227,   228,   229,
     230,   128,   129,   130,   131,   132,   133,   134,   135,   427,
     428,   429,   430,   431,    51,   432,   140,   498,   499,   500,
     335,   262,   263,   264,   349,   446,    37,    38,    61,    62,
     433,   495,   567,    69,   233
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     213,    41,   155,   106,    44,    95,    96,    97,   269,    52,
     162,    54,   391,   288,   238,   290,   154,   154,    40,   163,
     332,   562,   379,   127,    73,   170,   332,   570,   170,   174,
     256,   143,   258,   260,   447,    75,   113,   116,   117,   118,
     199,   265,    45,   203,   116,   117,   118,    86,    58,    89,
     293,    46,   339,   231,   476,   398,   464,    98,    39,   331,
     301,   175,   107,   252,   284,   536,    93,   294,   154,   292,
     257,   200,   105,   401,   345,   344,   235,   293,   340,   176,
      40,    47,   399,   141,   142,   376,   204,   205,   206,    59,
     402,   152,   288,   321,   294,   157,   158,   159,   108,    42,
     396,   466,   397,   316,   555,    94,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   119,   456,   481,   266,   207,   504,   201,   119,   253,
     112,   346,   293,   237,   109,   293,    43,   120,   107,   383,
     384,   291,   333,   382,   120,   347,   515,    74,   497,   294,
     394,   395,   294,   293,   259,   331,   457,   270,   283,    48,
     293,   208,   293,   203,   116,   117,   118,    49,   170,   337,
     294,    53,   348,    55,   108,   209,   443,   294,    50,   294,
      73,   271,    56,   121,   122,   123,   234,   301,    60,   377,
     121,   122,   123,   380,   434,   256,   426,   267,   211,   458,
     439,   440,   527,   478,   444,   445,   204,   205,   206,   381,
     109,    63,    57,   210,   211,   272,   459,    65,    66,   124,
     393,   212,   386,   418,   444,   445,   124,   547,   315,   278,
     316,   279,    70,   471,   487,   203,   116,   117,   118,   561,
     296,   387,   470,   473,   474,   207,   301,   388,   119,   293,
     523,   319,   387,   203,   116,   117,   118,   293,   472,   293,
     448,   557,   336,   127,   120,   421,   294,   342,   127,   469,
     424,   283,    67,   422,   294,   154,   294,    68,   204,   205,
     206,   208,   525,    78,   312,   313,   314,   315,    79,   316,
      73,   293,   293,   522,   549,   209,   204,   205,   206,   182,
     183,   184,   185,   186,   187,    84,    85,    80,   294,   294,
     121,   122,   123,    81,    82,   300,   419,   207,   475,    87,
     119,   318,   301,    99,   319,   518,    90,   520,   521,   480,
     100,   102,    91,   210,   211,   207,   120,   326,   119,   374,
     327,   212,   375,   115,   103,   136,   124,   203,   116,   117,
     118,  -317,  -317,   208,   120,  -317,  -317,   138,   310,   311,
     312,   313,   314,   315,   139,   316,   484,   209,   143,   181,
     486,   208,   506,   181,   516,   319,   517,   319,   529,   331,
     550,   331,   121,   122,   123,   209,   541,   145,   146,   542,
     286,   205,   206,   148,   151,   116,   203,   116,   117,   118,
     121,   122,   123,   156,   546,   210,   211,   319,   526,   552,
     488,   568,   331,   212,   319,   118,    74,   566,   124,   569,
     161,   171,   163,   210,   211,   165,   166,   173,   178,   207,
     179,   212,   119,   180,   181,   295,   124,   198,   197,   232,
     205,   206,   239,   236,   242,   245,   488,   112,   120,   261,
     268,    15,   489,   277,   280,   281,   488,   490,   282,   320,
     317,   289,   323,   491,   492,   287,   324,   325,   328,   331,
     343,   351,   296,   338,   352,   372,   373,    73,   207,   209,
     493,   119,   392,   389,  -314,   494,   400,   420,   489,   436,
     441,   442,   449,   490,   121,   122,   123,   120,   489,   491,
     492,   450,   452,   490,   453,   454,   463,   468,   467,   491,
     492,   293,   398,   559,   287,   479,   493,   210,   211,   297,
    -314,   494,   316,   485,   482,   212,   493,   483,   209,   501,
     124,   494,   503,   505,   496,   507,   508,   509,   510,   298,
     511,   513,   512,   121,   122,   123,   299,   300,   524,   528,
     530,   531,   532,   533,   301,   302,   534,   535,   537,   538,
     540,   543,   560,   558,   544,   545,   210,   211,   548,   551,
    -267,   564,   101,    72,   212,   556,   565,   423,   519,   124,
     303,   304,   305,   306,   307,   279,   572,   308,   309,  -316,
     310,   311,   312,   313,   314,   315,     1,   316,   425,   244,
     465,     1,   202,   437,     2,   378,  -268,   514,   571,     2,
     435,     3,   322,   554,   385,     4,     3,   553,   438,   350,
       4,   539,   160,   334,     0,     0,     5,     0,     0,     6,
       7,     5,     0,     0,     6,     7,     0,     0,     0,     0,
       0,     8,     9,     0,     0,   353,     8,     9,     0,   296,
       0,     0,    10,     0,     0,    11,     0,    10,   354,     0,
      11,     0,     0,   355,   356,   357,   358,   359,     0,   360,
       0,     0,     0,     0,     0,     0,    12,   361,     0,     0,
      13,    12,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,   297,     0,     0,     0,
      14,    15,     0,   362,     0,     0,    15,     0,   296,     0,
     477,     0,     0,     0,     0,     0,   390,     0,     0,     0,
     363,     0,   364,   365,   300,     0,   296,     0,     0,     0,
       0,   301,   302,     0,     0,     0,     0,   366,     0,     0,
       0,   367,     0,   368,    16,    17,    18,     0,     0,    16,
      17,    18,     0,   369,     0,   297,     0,   303,   304,   305,
     306,   307,     0,     0,   308,   309,     0,   310,   311,   312,
     313,   314,   315,  -317,   316,   390,     0,     0,     0,     0,
       0,     0,     0,   300,     0,     0,     0,   370,     0,     0,
     301,   302,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   300,     0,     0,     0,     0,     0,     0,   301,  -317,
       0,     0,     0,     0,     0,     0,   303,   304,   305,   306,
     307,     0,     0,   308,   309,     0,   310,   311,   312,   313,
     314,   315,     0,   316,  -317,  -317,  -317,   306,   307,     0,
       0,   308,   309,     0,   310,   311,   312,   313,   314,   315,
       0,   316,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193
};

static const yytype_int16 yycheck[] =
{
     143,     2,    94,    74,     5,    55,    56,    57,   200,    10,
     103,    12,   289,   208,   149,   210,    93,    94,     3,    12,
       3,    51,     3,    80,    58,   110,     3,     3,   113,   113,
     173,    83,   175,   176,   351,    37,    77,     4,     5,     6,
      94,   179,    71,     3,     4,     5,     6,    48,    19,    50,
     115,    80,    90,   145,   180,   101,   373,    58,    26,   185,
     136,    55,     9,   167,   207,   496,    94,   132,   145,   212,
     174,   125,    74,   104,    63,    55,   147,   115,   116,    73,
       3,   110,   128,    84,    85,   277,    46,    47,    48,    60,
     121,    92,   287,   236,   132,    96,    97,    99,    45,     3,
     295,   378,   297,   179,   535,   133,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    88,    27,   400,   181,    85,   443,   181,    88,   170,
      77,   120,   115,   185,    81,   115,     3,   104,     9,   282,
     283,   212,   125,   281,   104,   134,   463,   181,   125,   132,
     293,   294,   132,   115,   114,   185,    61,     3,   111,    94,
     115,   121,   115,     3,     4,     5,     6,    94,   253,   253,
     132,    80,   161,    71,    45,   135,   130,   132,    98,   132,
      58,    27,    80,   150,   151,   152,    64,   136,     3,   182,
     150,   151,   152,   174,   329,   338,   181,   198,   174,   104,
     343,   344,   479,   398,   158,   159,    46,    47,    48,   280,
      81,   154,   110,   173,   174,    61,   121,    17,    18,   186,
     182,   181,    92,   316,   158,   159,   186,   182,   177,   181,
     179,   183,   112,    92,   426,     3,     4,     5,     6,   556,
      54,   111,   108,   386,   387,    85,   136,   117,    88,   115,
     108,   185,   111,     3,     4,     5,     6,   115,   117,   115,
     352,   538,   252,   320,   104,   320,   132,   257,   325,   125,
     325,   111,     0,   323,   132,   352,   132,   184,    46,    47,
      48,   121,   477,     3,   174,   175,   176,   177,   183,   179,
      58,   115,   115,   117,   117,   135,    46,    47,    48,   138,
     139,   140,   141,   142,   143,    46,    47,   181,   132,   132,
     150,   151,   152,    94,   127,   129,   317,    85,   389,     3,
      88,   182,   136,   125,   185,   468,   123,   470,   471,   400,
     185,    97,   127,   173,   174,    85,   104,   182,    88,   182,
     185,   181,   185,     3,   124,     4,   186,     3,     4,     5,
       6,   165,   166,   121,   104,   169,   170,   121,   172,   173,
     174,   175,   176,   177,     3,   179,   182,   135,    83,   185,
     182,   121,   182,   185,   182,   185,   182,   185,   182,   185,
     523,   185,   150,   151,   152,   135,   182,    93,   181,   185,
      46,    47,    48,     3,    46,     4,     3,     4,     5,     6,
     150,   151,   152,     3,   182,   173,   174,   185,   479,   182,
      25,   182,   185,   181,   185,     6,   181,   560,   186,   562,
     181,   114,    12,   173,   174,   182,   182,   126,     4,    85,
       4,   181,    88,   182,   185,    17,   186,   131,    46,     3,
      47,    48,    91,   162,   112,     3,    25,    77,   104,   118,
       3,   112,    67,   125,   181,   181,    25,    72,   181,   181,
      98,   179,    39,    78,    79,   121,    49,   181,    94,   185,
      55,   181,    54,   185,    93,   120,   181,    58,    85,   135,
      95,    88,   182,   181,    99,   100,   181,     3,    67,     3,
     161,   120,   181,    72,   150,   151,   152,   104,    67,    78,
      79,   181,   181,    72,   181,   181,   181,    94,   182,    78,
      79,   115,   101,    82,   121,   181,    95,   173,   174,   101,
      99,   100,   179,     3,   104,   181,    95,   180,   135,    70,
     186,   100,    63,   160,   185,     6,     6,     6,     6,   121,
       6,   104,   120,   150,   151,   152,   128,   129,   182,   182,
     182,    99,    78,    78,   136,   137,    78,    99,     3,   126,
     182,   182,   131,     6,   182,   182,   173,   174,   182,   182,
     185,   182,    68,    24,   181,   181,   181,   324,   469,   186,
     162,   163,   164,   165,   166,   183,   182,   169,   170,     0,
     172,   173,   174,   175,   176,   177,     7,   179,   327,   155,
     375,     7,   142,   338,    15,   278,   185,   461,   565,    15,
     331,    22,   237,   531,   284,    26,    22,   530,   342,   263,
      26,   504,   100,   251,    -1,    -1,    37,    -1,    -1,    40,
      41,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    11,    52,    53,    -1,    54,
      -1,    -1,    63,    -1,    -1,    66,    -1,    63,    24,    -1,
      66,    -1,    -1,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    43,    -1,    -1,
      91,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   101,    -1,    -1,    -1,
     106,   112,    -1,    69,    -1,    -1,   112,    -1,    54,    -1,
     115,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      86,    -1,    88,    89,   129,    -1,    54,    -1,    -1,    -1,
      -1,   136,   137,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,    -1,   109,   155,   156,   157,    -1,    -1,   155,
     156,   157,    -1,   119,    -1,   101,    -1,   162,   163,   164,
     165,   166,    -1,    -1,   169,   170,    -1,   172,   173,   174,
     175,   176,   177,   101,   179,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,    -1,    -1,    -1,   153,    -1,    -1,
     136,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,   162,   163,   164,   165,
     166,    -1,    -1,   169,   170,    -1,   172,   173,   174,   175,
     176,   177,    -1,   179,   162,   163,   164,   165,   166,    -1,
      -1,   169,   170,    -1,   172,   173,   174,   175,   176,   177,
      -1,   179,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    37,    40,    41,    52,    53,
      63,    66,    87,    91,   106,   112,   155,   156,   157,   188,
     189,   190,   191,   195,   197,   199,   200,   204,   205,   206,
     218,   220,   223,   224,   225,   227,   230,   303,   304,    26,
       3,   292,     3,     3,   292,    71,    80,   110,    94,    94,
      98,   291,   292,    80,   292,    71,    80,   110,    19,    60,
       3,   305,   306,   154,   196,   196,   196,     0,   184,   310,
     112,   192,   192,    58,   181,   233,   234,   238,     3,   183,
     181,    94,   127,   207,   207,   207,   292,     3,   201,   292,
     123,   127,   219,    94,   133,   219,   219,   219,   292,   125,
     185,   190,    97,   124,   250,   233,   234,     9,    45,    81,
     235,   236,    77,   235,   246,     3,     4,     5,     6,    88,
     104,   150,   151,   152,   186,   253,   254,   277,   278,   279,
     280,   281,   282,   283,   284,   285,     4,   198,   121,     3,
     293,   292,   292,    83,   243,    93,   181,   226,     3,   228,
     229,    46,   292,   202,   278,   202,     3,   292,   292,   233,
     306,   181,   281,    12,   239,   182,   182,   231,   232,   233,
     238,   114,   237,   126,   231,    55,    73,   251,     4,     4,
     182,   185,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   270,   271,   272,    46,   131,    94,
     125,   181,   226,     3,    46,    47,    48,    85,   121,   135,
     173,   174,   181,   256,   257,   258,   259,   260,   261,   262,
     263,   265,   266,   267,   268,   269,   273,   274,   275,   276,
     277,   202,     3,   311,    64,   234,   162,   185,   243,    91,
     221,   222,   112,   203,   203,     3,   193,   194,   240,   252,
     255,   256,   246,   235,   247,   248,   256,   246,   256,   114,
     256,   118,   298,   299,   300,   270,   277,   292,     3,   230,
       3,    27,    61,   208,   209,   210,   217,   125,   181,   183,
     181,   181,   181,   111,   256,   264,    46,   121,   257,   179,
     257,   234,   256,   115,   132,    17,    54,   101,   121,   128,
     129,   136,   137,   162,   163,   164,   165,   166,   169,   170,
     172,   173,   174,   175,   176,   177,   179,    98,   182,   185,
     181,   256,   229,    39,    49,   181,   182,   185,    94,   241,
     242,   185,     3,   125,   296,   297,   251,   231,   185,    90,
     116,   249,   251,    55,    55,    63,   120,   134,   161,   301,
     300,   181,    93,    11,    24,    29,    30,    31,    32,    33,
      35,    43,    69,    86,    88,    89,   103,   107,   109,   119,
     153,   211,   120,   181,   182,   185,   230,   182,   239,     3,
     174,   234,   270,   256,   256,   264,    92,   111,   117,   181,
     121,   252,   182,   182,   256,   256,   257,   257,   101,   128,
     181,   104,   121,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   281,   292,
       3,   254,   219,   201,   254,   194,   181,   286,   287,   288,
     289,   290,   292,   307,   243,   255,     3,   248,   298,   256,
     256,   161,   120,   130,   158,   159,   302,   311,   202,   181,
     181,   213,   181,   181,   181,   212,    27,    61,   104,   121,
     214,   215,   216,   181,   311,   209,   252,   182,    94,   125,
     108,    92,   117,   256,   256,   234,   180,   115,   257,   181,
     234,   252,   104,   180,   182,     3,   182,   230,    25,    67,
      72,    78,    79,    95,   100,   308,   185,   125,   294,   295,
     296,    70,   244,    63,   311,   160,   182,     6,     6,     6,
       6,     6,   120,   104,   216,   311,   182,   182,   256,   211,
     256,   256,   117,   108,   182,   257,   234,   252,   182,   182,
     182,    99,    78,    78,    78,    99,   287,     3,   126,   302,
     182,   182,   185,   182,   182,   182,   182,   182,   182,   117,
     256,   182,   182,   295,   288,   287,   181,   252,     6,    82,
     131,   311,    51,   245,   182,   181,   256,   309,   182,   256,
       3,   276,   182
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   187,   188,   189,   189,   190,   190,   190,   190,   190,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   195,   196,
     196,   197,   198,   199,   199,   200,   200,   201,   202,   203,
     203,   204,   205,   205,   205,   206,   206,   206,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   212,   212,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   216,   216,   217,   217,
     218,   218,   218,   218,   219,   219,   220,   221,   222,   223,
     224,   225,   225,   226,   226,   227,   228,   228,   229,   230,
     230,   230,   231,   231,   232,   232,   233,   233,   234,   234,
     235,   236,   236,   236,   237,   237,   238,   239,   239,   240,
     241,   241,   242,   243,   243,   244,   244,   245,   245,   246,
     246,   247,   247,   248,   249,   249,   249,   250,   250,   251,
     251,   251,   251,   251,   251,   252,   252,   253,   253,   254,
     254,   255,   256,   256,   256,   256,   256,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   258,   258,
     259,   259,   259,   259,   259,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   261,   261,   262,   262,
     262,   262,   263,   263,   263,   263,   264,   264,   265,   265,
     266,   266,   266,   266,   266,   266,   266,   267,   267,   268,
     269,   270,   270,   270,   270,   270,   270,   271,   271,   271,
     271,   271,   271,   272,   272,   273,   274,   275,   276,   276,
     276,   276,   277,   277,   277,   277,   277,   277,   277,   278,
     279,   279,   280,   280,   281,   282,   283,   284,   284,   284,
     285,   286,   286,   287,   287,   288,   288,   289,   289,   290,
     291,   292,   292,   293,   293,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   300,   300,   301,
     301,   301,   301,   302,   302,   302,   303,   303,   304,   305,
     305,   306,   307,   307,   307,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   309,   310,   310,   311,   311
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     1,     4,
       4,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     4,     3,     0,     5,     3,     0,
       1,     0,     1,     2,     2,     1,     1,     2,     5,     4,
       4,     4,     3,     4,     2,     0,     5,     1,     4,     4,
       2,     8,     5,     3,     0,     5,     1,     3,     3,     2,
       2,     6,     1,     1,     1,     3,     3,     3,     4,     6,
       2,     1,     1,     1,     1,     0,     7,     1,     0,     1,
       1,     0,     2,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     3,     2,     1,     1,     0,     2,     0,     2,
       2,     4,     2,     4,     0,     1,     3,     1,     0,     1,
       3,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     2,     2,     3,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     5,     6,
       5,     6,     4,     6,     3,     5,     4,     5,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       1,     1,     3,     1,     1,     1,     4,     1,     3,     2,
       1,     1,     3,     1,     0,     1,     5,     1,     0,     2,
       1,     1,     0,     1,     0,     1,     2,     3,     5,     1,
       3,     1,     2,     2,     1,     0,     1,     0,     2,     1,
       3,     3,     4,     6,     8,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     0,     1,     1,     0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 176 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2348 "conflict_test.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 176 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2354 "conflict_test.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 166 "bison_parser.y"
                { }
#line 2360 "conflict_test.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 166 "bison_parser.y"
                { }
#line 2366 "conflict_test.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2379 "conflict_test.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2385 "conflict_test.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2391 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2404 "conflict_test.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2417 "conflict_test.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2423 "conflict_test.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2429 "conflict_test.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2435 "conflict_test.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 176 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2441 "conflict_test.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2447 "conflict_test.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2453 "conflict_test.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 166 "bison_parser.y"
                { }
#line 2459 "conflict_test.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 176 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2465 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 166 "bison_parser.y"
                { }
#line 2471 "conflict_test.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2477 "conflict_test.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2483 "conflict_test.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2489 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 166 "bison_parser.y"
                { }
#line 2495 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2508 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2514 "conflict_test.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2520 "conflict_test.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 166 "bison_parser.y"
                { }
#line 2526 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 166 "bison_parser.y"
                { }
#line 2532 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2538 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 166 "bison_parser.y"
                { }
#line 2544 "conflict_test.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 166 "bison_parser.y"
                { }
#line 2550 "conflict_test.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 166 "bison_parser.y"
                { }
#line 2556 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2562 "conflict_test.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2568 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 166 "bison_parser.y"
                { }
#line 2574 "conflict_test.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2580 "conflict_test.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2586 "conflict_test.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2592 "conflict_test.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2598 "conflict_test.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2604 "conflict_test.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2610 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 168 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2623 "conflict_test.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2629 "conflict_test.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2642 "conflict_test.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2648 "conflict_test.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2654 "conflict_test.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2660 "conflict_test.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2666 "conflict_test.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2672 "conflict_test.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2678 "conflict_test.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2684 "conflict_test.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2690 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 166 "bison_parser.y"
                { }
#line 2696 "conflict_test.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2702 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 166 "bison_parser.y"
                { }
#line 2708 "conflict_test.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2721 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2727 "conflict_test.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2733 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2739 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2745 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2751 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2764 "conflict_test.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2777 "conflict_test.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2783 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 166 "bison_parser.y"
                { }
#line 2789 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2795 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2801 "conflict_test.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2814 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2827 "conflict_test.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2840 "conflict_test.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2846 "conflict_test.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2852 "conflict_test.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2858 "conflict_test.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2864 "conflict_test.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2870 "conflict_test.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2876 "conflict_test.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2882 "conflict_test.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2888 "conflict_test.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2894 "conflict_test.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2900 "conflict_test.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2906 "conflict_test.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2912 "conflict_test.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2918 "conflict_test.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2924 "conflict_test.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2930 "conflict_test.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 166 "bison_parser.y"
                { }
#line 2936 "conflict_test.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 166 "bison_parser.y"
                { }
#line 2942 "conflict_test.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 166 "bison_parser.y"
                { }
#line 2948 "conflict_test.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2954 "conflict_test.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2960 "conflict_test.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2966 "conflict_test.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2972 "conflict_test.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2978 "conflict_test.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2984 "conflict_test.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2990 "conflict_test.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2996 "conflict_test.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3002 "conflict_test.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3008 "conflict_test.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3014 "conflict_test.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3020 "conflict_test.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3026 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3032 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3038 "conflict_test.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3044 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 177 "bison_parser.y"
                {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 3057 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3063 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3069 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 167 "bison_parser.y"
                { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 3075 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 176 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 3081 "conflict_test.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3087 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3093 "conflict_test.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3099 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3105 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 3111 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 3117 "conflict_test.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 3123 "conflict_test.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 166 "bison_parser.y"
                { }
#line 3129 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 166 "bison_parser.y"
                { }
#line 3135 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3141 "conflict_test.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3147 "conflict_test.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3153 "conflict_test.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 3159 "conflict_test.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3165 "conflict_test.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 166 "bison_parser.y"
                { }
#line 3171 "conflict_test.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 185 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3177 "conflict_test.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 168 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 3190 "conflict_test.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 77 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3298 "conflict_test.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: statement_list opt_semicolon  */
#line 312 "bison_parser.y"
                                     {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param != nullptr) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3527 "conflict_test.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 331 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3538 "conflict_test.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 337 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3549 "conflict_test.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 344 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3558 "conflict_test.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 348 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3567 "conflict_test.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 352 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3573 "conflict_test.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 353 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3579 "conflict_test.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 354 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3585 "conflict_test.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 356 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3591 "conflict_test.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 357 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3597 "conflict_test.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 358 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3603 "conflict_test.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 359 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3609 "conflict_test.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 360 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3615 "conflict_test.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 361 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3621 "conflict_test.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 362 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3627 "conflict_test.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 363 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3633 "conflict_test.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 364 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3639 "conflict_test.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 365 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3645 "conflict_test.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 371 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3651 "conflict_test.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 372 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3657 "conflict_test.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 374 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3666 "conflict_test.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 378 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3675 "conflict_test.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 383 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3684 "conflict_test.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 387 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3694 "conflict_test.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 397 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3700 "conflict_test.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 398 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3706 "conflict_test.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 399 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3712 "conflict_test.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 407 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3722 "conflict_test.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 415 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3731 "conflict_test.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 419 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3741 "conflict_test.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 430 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3752 "conflict_test.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 436 "bison_parser.y"
                                               {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3763 "conflict_test.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 443 "bison_parser.y"
                       {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3782 "conflict_test.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 458 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3791 "conflict_test.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 463 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3797 "conflict_test.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 464 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3803 "conflict_test.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 470 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3814 "conflict_test.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 482 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3820 "conflict_test.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 483 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3830 "conflict_test.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 488 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3840 "conflict_test.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 499 "bison_parser.y"
                                                                                         {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 3858 "conflict_test.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 512 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 3875 "conflict_test.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 524 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3887 "conflict_test.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 531 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3899 "conflict_test.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 538 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3912 "conflict_test.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 547 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3918 "conflict_test.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 548 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3924 "conflict_test.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 550 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3933 "conflict_test.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 554 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3942 "conflict_test.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 559 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3948 "conflict_test.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 560 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3954 "conflict_test.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 562 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3965 "conflict_test.cpp"
    break;

  case 57: /* column_type: BIGINT  */
#line 569 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3971 "conflict_test.cpp"
    break;

  case 58: /* column_type: BOOLEAN  */
#line 570 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3977 "conflict_test.cpp"
    break;

  case 59: /* column_type: CHAR '(' INTVAL ')'  */
#line 571 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3983 "conflict_test.cpp"
    break;

  case 60: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 572 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3989 "conflict_test.cpp"
    break;

  case 61: /* column_type: DATE  */
#line 573 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3995 "conflict_test.cpp"
    break;

  case 62: /* column_type: DATETIME  */
#line 574 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4001 "conflict_test.cpp"
    break;

  case 63: /* column_type: DECIMAL opt_decimal_specification  */
#line 575 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 4010 "conflict_test.cpp"
    break;

  case 64: /* column_type: DOUBLE  */
#line 579 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 4016 "conflict_test.cpp"
    break;

  case 65: /* column_type: FLOAT  */
#line 580 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 4022 "conflict_test.cpp"
    break;

  case 66: /* column_type: INT  */
#line 581 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4028 "conflict_test.cpp"
    break;

  case 67: /* column_type: INTEGER  */
#line 582 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4034 "conflict_test.cpp"
    break;

  case 68: /* column_type: LONG  */
#line 583 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 4040 "conflict_test.cpp"
    break;

  case 69: /* column_type: REAL  */
#line 584 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 4046 "conflict_test.cpp"
    break;

  case 70: /* column_type: SMALLINT  */
#line 585 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 4052 "conflict_test.cpp"
    break;

  case 71: /* column_type: TEXT  */
#line 586 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 4058 "conflict_test.cpp"
    break;

  case 72: /* column_type: TIME opt_time_precision  */
#line 587 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 4064 "conflict_test.cpp"
    break;

  case 73: /* column_type: TIMESTAMP  */
#line 588 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4070 "conflict_test.cpp"
    break;

  case 74: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 589 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4076 "conflict_test.cpp"
    break;

  case 75: /* opt_time_precision: '(' INTVAL ')'  */
#line 591 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4082 "conflict_test.cpp"
    break;

  case 76: /* opt_time_precision: %empty  */
#line 592 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 4088 "conflict_test.cpp"
    break;

  case 77: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 594 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4094 "conflict_test.cpp"
    break;

  case 78: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 595 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4100 "conflict_test.cpp"
    break;

  case 79: /* opt_decimal_specification: %empty  */
#line 596 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4106 "conflict_test.cpp"
    break;

  case 80: /* opt_column_constraints: column_constraint_set  */
#line 598 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 4112 "conflict_test.cpp"
    break;

  case 81: /* opt_column_constraints: %empty  */
#line 599 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 4118 "conflict_test.cpp"
    break;

  case 82: /* column_constraint_set: column_constraint  */
#line 601 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 4127 "conflict_test.cpp"
    break;

  case 83: /* column_constraint_set: column_constraint_set column_constraint  */
#line 605 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 4136 "conflict_test.cpp"
    break;

  case 84: /* column_constraint: PRIMARY KEY  */
#line 610 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4142 "conflict_test.cpp"
    break;

  case 85: /* column_constraint: UNIQUE  */
#line 611 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4148 "conflict_test.cpp"
    break;

  case 86: /* column_constraint: NULL  */
#line 612 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4154 "conflict_test.cpp"
    break;

  case 87: /* column_constraint: NOT NULL  */
#line 613 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4160 "conflict_test.cpp"
    break;

  case 88: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 615 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4166 "conflict_test.cpp"
    break;

  case 89: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 616 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4172 "conflict_test.cpp"
    break;

  case 90: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 624 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4183 "conflict_test.cpp"
    break;

  case 91: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 630 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4194 "conflict_test.cpp"
    break;

  case 92: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 636 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4204 "conflict_test.cpp"
    break;

  case 93: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 642 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4214 "conflict_test.cpp"
    break;

  case 94: /* opt_exists: IF EXISTS  */
#line 648 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4220 "conflict_test.cpp"
    break;

  case 95: /* opt_exists: %empty  */
#line 649 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4226 "conflict_test.cpp"
    break;

  case 96: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 656 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4236 "conflict_test.cpp"
    break;

  case 97: /* alter_action: drop_action  */
#line 662 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4242 "conflict_test.cpp"
    break;

  case 98: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 664 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4251 "conflict_test.cpp"
    break;

  case 99: /* delete_statement: DELETE FROM table_name opt_where  */
#line 674 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4262 "conflict_test.cpp"
    break;

  case 100: /* truncate_statement: TRUNCATE table_name  */
#line 681 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4272 "conflict_test.cpp"
    break;

  case 101: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 692 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4284 "conflict_test.cpp"
    break;

  case 102: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 699 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4296 "conflict_test.cpp"
    break;

  case 103: /* opt_column_list: '(' ident_commalist ')'  */
#line 707 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4302 "conflict_test.cpp"
    break;

  case 104: /* opt_column_list: %empty  */
#line 708 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4308 "conflict_test.cpp"
    break;

  case 105: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 715 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4319 "conflict_test.cpp"
    break;

  case 106: /* update_clause_commalist: update_clause  */
#line 722 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4328 "conflict_test.cpp"
    break;

  case 107: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 726 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4337 "conflict_test.cpp"
    break;

  case 108: /* update_clause: IDENTIFIER '=' expr  */
#line 731 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4347 "conflict_test.cpp"
    break;

  case 109: /* select_statement: opt_with_clause select_with_paren  */
#line 741 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4356 "conflict_test.cpp"
    break;

  case 110: /* select_statement: opt_with_clause select_no_paren  */
#line 745 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4365 "conflict_test.cpp"
    break;

  case 111: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 749 "bison_parser.y"
                                                                                                 {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 4381 "conflict_test.cpp"
    break;

  case 114: /* select_within_set_operation_no_parentheses: select_clause  */
#line 763 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4387 "conflict_test.cpp"
    break;

  case 115: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 764 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4400 "conflict_test.cpp"
    break;

  case 116: /* select_with_paren: '(' select_no_paren ')'  */
#line 773 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4406 "conflict_test.cpp"
    break;

  case 117: /* select_with_paren: '(' select_with_paren ')'  */
#line 774 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4412 "conflict_test.cpp"
    break;

  case 118: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 776 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec) != nullptr) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4431 "conflict_test.cpp"
    break;

  case 119: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 790 "bison_parser.y"
                                                                                                {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
}
#line 4447 "conflict_test.cpp"
    break;

  case 120: /* set_operator: set_type opt_all  */
#line 802 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4456 "conflict_test.cpp"
    break;

  case 121: /* set_type: UNION  */
#line 807 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4465 "conflict_test.cpp"
    break;

  case 122: /* set_type: INTERSECT  */
#line 811 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4474 "conflict_test.cpp"
    break;

  case 123: /* set_type: EXCEPT  */
#line 815 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4483 "conflict_test.cpp"
    break;

  case 124: /* opt_all: ALL  */
#line 820 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4489 "conflict_test.cpp"
    break;

  case 125: /* opt_all: %empty  */
#line 821 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4495 "conflict_test.cpp"
    break;

  case 126: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 823 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4509 "conflict_test.cpp"
    break;

  case 127: /* opt_distinct: DISTINCT  */
#line 833 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4515 "conflict_test.cpp"
    break;

  case 128: /* opt_distinct: %empty  */
#line 834 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4521 "conflict_test.cpp"
    break;

  case 130: /* opt_from_clause: from_clause  */
#line 838 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4527 "conflict_test.cpp"
    break;

  case 131: /* opt_from_clause: %empty  */
#line 839 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4533 "conflict_test.cpp"
    break;

  case 132: /* from_clause: FROM table_ref  */
#line 841 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4539 "conflict_test.cpp"
    break;

  case 133: /* opt_where: WHERE expr  */
#line 843 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4545 "conflict_test.cpp"
    break;

  case 134: /* opt_where: %empty  */
#line 844 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4551 "conflict_test.cpp"
    break;

  case 135: /* opt_group: GROUP BY expr_list opt_having  */
#line 846 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4561 "conflict_test.cpp"
    break;

  case 136: /* opt_group: %empty  */
#line 851 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4567 "conflict_test.cpp"
    break;

  case 137: /* opt_having: HAVING expr  */
#line 853 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4573 "conflict_test.cpp"
    break;

  case 138: /* opt_having: %empty  */
#line 854 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4579 "conflict_test.cpp"
    break;

  case 139: /* opt_order: ORDER BY order_list  */
#line 856 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4585 "conflict_test.cpp"
    break;

  case 140: /* opt_order: %empty  */
#line 857 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4591 "conflict_test.cpp"
    break;

  case 141: /* order_list: order_desc  */
#line 859 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4600 "conflict_test.cpp"
    break;

  case 142: /* order_list: order_list ',' order_desc  */
#line 863 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4609 "conflict_test.cpp"
    break;

  case 143: /* order_desc: expr opt_order_type  */
#line 868 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4615 "conflict_test.cpp"
    break;

  case 144: /* opt_order_type: ASC  */
#line 870 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4621 "conflict_test.cpp"
    break;

  case 145: /* opt_order_type: DESC  */
#line 871 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4627 "conflict_test.cpp"
    break;

  case 146: /* opt_order_type: %empty  */
#line 872 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4633 "conflict_test.cpp"
    break;

  case 147: /* opt_top: TOP int_literal  */
#line 876 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4639 "conflict_test.cpp"
    break;

  case 148: /* opt_top: %empty  */
#line 877 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4645 "conflict_test.cpp"
    break;

  case 149: /* opt_limit: LIMIT expr  */
#line 879 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4651 "conflict_test.cpp"
    break;

  case 150: /* opt_limit: OFFSET expr  */
#line 880 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4657 "conflict_test.cpp"
    break;

  case 151: /* opt_limit: LIMIT expr OFFSET expr  */
#line 881 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4663 "conflict_test.cpp"
    break;

  case 152: /* opt_limit: LIMIT ALL  */
#line 882 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4669 "conflict_test.cpp"
    break;

  case 153: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 883 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4675 "conflict_test.cpp"
    break;

  case 154: /* opt_limit: %empty  */
#line 884 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4681 "conflict_test.cpp"
    break;

  case 155: /* expr_list: expr_alias  */
#line 889 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4690 "conflict_test.cpp"
    break;

  case 156: /* expr_list: expr_list ',' expr_alias  */
#line 893 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4699 "conflict_test.cpp"
    break;

  case 157: /* opt_literal_list: literal_list  */
#line 898 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4705 "conflict_test.cpp"
    break;

  case 158: /* opt_literal_list: %empty  */
#line 899 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4711 "conflict_test.cpp"
    break;

  case 159: /* literal_list: literal  */
#line 901 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4720 "conflict_test.cpp"
    break;

  case 160: /* literal_list: literal_list ',' literal  */
#line 905 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4729 "conflict_test.cpp"
    break;

  case 161: /* expr_alias: expr opt_alias  */
#line 910 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4741 "conflict_test.cpp"
    break;

  case 167: /* operand: '(' expr ')'  */
#line 920 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4747 "conflict_test.cpp"
    break;

  case 177: /* operand: '(' select_no_paren ')'  */
#line 922 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4755 "conflict_test.cpp"
    break;

  case 180: /* unary_expr: '-' operand  */
#line 928 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4761 "conflict_test.cpp"
    break;

  case 181: /* unary_expr: NOT operand  */
#line 929 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4767 "conflict_test.cpp"
    break;

  case 182: /* unary_expr: operand ISNULL  */
#line 930 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4773 "conflict_test.cpp"
    break;

  case 183: /* unary_expr: operand IS NULL  */
#line 931 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4779 "conflict_test.cpp"
    break;

  case 184: /* unary_expr: operand IS NOT NULL  */
#line 932 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4785 "conflict_test.cpp"
    break;

  case 186: /* binary_expr: operand '-' operand  */
#line 934 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4791 "conflict_test.cpp"
    break;

  case 187: /* binary_expr: operand '+' operand  */
#line 935 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4797 "conflict_test.cpp"
    break;

  case 188: /* binary_expr: operand '/' operand  */
#line 936 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4803 "conflict_test.cpp"
    break;

  case 189: /* binary_expr: operand '*' operand  */
#line 937 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4809 "conflict_test.cpp"
    break;

  case 190: /* binary_expr: operand '%' operand  */
#line 938 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4815 "conflict_test.cpp"
    break;

  case 191: /* binary_expr: operand '^' operand  */
#line 939 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4821 "conflict_test.cpp"
    break;

  case 192: /* binary_expr: operand LIKE operand  */
#line 940 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4827 "conflict_test.cpp"
    break;

  case 193: /* binary_expr: operand NOT LIKE operand  */
#line 941 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4833 "conflict_test.cpp"
    break;

  case 194: /* binary_expr: operand ILIKE operand  */
#line 942 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4839 "conflict_test.cpp"
    break;

  case 195: /* binary_expr: operand CONCAT operand  */
#line 943 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4845 "conflict_test.cpp"
    break;

  case 196: /* logic_expr: expr AND expr  */
#line 945 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4851 "conflict_test.cpp"
    break;

  case 197: /* logic_expr: expr OR expr  */
#line 946 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4857 "conflict_test.cpp"
    break;

  case 198: /* in_expr: operand IN '(' expr_list ')'  */
#line 948 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4863 "conflict_test.cpp"
    break;

  case 199: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 949 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4869 "conflict_test.cpp"
    break;

  case 200: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 950 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4875 "conflict_test.cpp"
    break;

  case 201: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 951 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4881 "conflict_test.cpp"
    break;

  case 202: /* case_expr: CASE expr case_list END  */
#line 955 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4887 "conflict_test.cpp"
    break;

  case 203: /* case_expr: CASE expr case_list ELSE expr END  */
#line 956 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4893 "conflict_test.cpp"
    break;

  case 204: /* case_expr: CASE case_list END  */
#line 957 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4899 "conflict_test.cpp"
    break;

  case 205: /* case_expr: CASE case_list ELSE expr END  */
#line 958 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4905 "conflict_test.cpp"
    break;

  case 206: /* case_list: WHEN expr THEN expr  */
#line 960 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4911 "conflict_test.cpp"
    break;

  case 207: /* case_list: case_list WHEN expr THEN expr  */
#line 961 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4917 "conflict_test.cpp"
    break;

  case 208: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 963 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4923 "conflict_test.cpp"
    break;

  case 209: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 964 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4929 "conflict_test.cpp"
    break;

  case 210: /* comp_expr: operand '=' operand  */
#line 966 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4935 "conflict_test.cpp"
    break;

  case 211: /* comp_expr: operand EQUALS operand  */
#line 967 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4941 "conflict_test.cpp"
    break;

  case 212: /* comp_expr: operand NOTEQUALS operand  */
#line 968 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4947 "conflict_test.cpp"
    break;

  case 213: /* comp_expr: operand '<' operand  */
#line 969 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4953 "conflict_test.cpp"
    break;

  case 214: /* comp_expr: operand '>' operand  */
#line 970 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4959 "conflict_test.cpp"
    break;

  case 215: /* comp_expr: operand LESSEQ operand  */
#line 971 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4965 "conflict_test.cpp"
    break;

  case 216: /* comp_expr: operand GREATEREQ operand  */
#line 972 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4971 "conflict_test.cpp"
    break;

  case 217: /* function_expr: IDENTIFIER '(' ')'  */
#line 974 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4977 "conflict_test.cpp"
    break;

  case 218: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 975 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4983 "conflict_test.cpp"
    break;

  case 219: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 977 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4989 "conflict_test.cpp"
    break;

  case 220: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 979 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4995 "conflict_test.cpp"
    break;

  case 221: /* datetime_field: SECOND  */
#line 981 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5001 "conflict_test.cpp"
    break;

  case 222: /* datetime_field: MINUTE  */
#line 982 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5007 "conflict_test.cpp"
    break;

  case 223: /* datetime_field: HOUR  */
#line 983 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5013 "conflict_test.cpp"
    break;

  case 224: /* datetime_field: DAY  */
#line 984 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5019 "conflict_test.cpp"
    break;

  case 225: /* datetime_field: MONTH  */
#line 985 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5025 "conflict_test.cpp"
    break;

  case 226: /* datetime_field: YEAR  */
#line 986 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5031 "conflict_test.cpp"
    break;

  case 227: /* datetime_field_plural: SECONDS  */
#line 988 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5037 "conflict_test.cpp"
    break;

  case 228: /* datetime_field_plural: MINUTES  */
#line 989 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5043 "conflict_test.cpp"
    break;

  case 229: /* datetime_field_plural: HOURS  */
#line 990 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5049 "conflict_test.cpp"
    break;

  case 230: /* datetime_field_plural: DAYS  */
#line 991 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5055 "conflict_test.cpp"
    break;

  case 231: /* datetime_field_plural: MONTHS  */
#line 992 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5061 "conflict_test.cpp"
    break;

  case 232: /* datetime_field_plural: YEARS  */
#line 993 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5067 "conflict_test.cpp"
    break;

  case 235: /* array_expr: ARRAY '[' expr_list ']'  */
#line 997 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5073 "conflict_test.cpp"
    break;

  case 236: /* array_index: operand '[' int_literal ']'  */
#line 999 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5079 "conflict_test.cpp"
    break;

  case 237: /* between_expr: operand BETWEEN operand AND operand  */
#line 1001 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5085 "conflict_test.cpp"
    break;

  case 238: /* column_name: IDENTIFIER  */
#line 1003 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5091 "conflict_test.cpp"
    break;

  case 239: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1004 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5097 "conflict_test.cpp"
    break;

  case 240: /* column_name: '*'  */
#line 1005 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5103 "conflict_test.cpp"
    break;

  case 241: /* column_name: IDENTIFIER '.' '*'  */
#line 1006 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5109 "conflict_test.cpp"
    break;

  case 249: /* string_literal: STRING  */
#line 1010 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5115 "conflict_test.cpp"
    break;

  case 250: /* bool_literal: TRUE  */
#line 1012 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5121 "conflict_test.cpp"
    break;

  case 251: /* bool_literal: FALSE  */
#line 1013 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5127 "conflict_test.cpp"
    break;

  case 252: /* num_literal: FLOATVAL  */
#line 1015 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5133 "conflict_test.cpp"
    break;

  case 254: /* int_literal: INTVAL  */
#line 1018 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5139 "conflict_test.cpp"
    break;

  case 255: /* null_literal: NULL  */
#line 1020 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5145 "conflict_test.cpp"
    break;

  case 256: /* date_literal: DATE STRING  */
#line 1022 "bison_parser.y"
                           {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 5160 "conflict_test.cpp"
    break;

  case 257: /* interval_literal: int_literal duration_field  */
#line 1033 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 5169 "conflict_test.cpp"
    break;

  case 258: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1037 "bison_parser.y"
                                 {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 5185 "conflict_test.cpp"
    break;

  case 259: /* interval_literal: INTERVAL STRING  */
#line 1048 "bison_parser.y"
                  {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 5221 "conflict_test.cpp"
    break;

  case 260: /* param_expr: '?'  */
#line 1080 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5231 "conflict_test.cpp"
    break;

  case 262: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1089 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5242 "conflict_test.cpp"
    break;

  case 266: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1098 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5253 "conflict_test.cpp"
    break;

  case 267: /* table_ref_commalist: table_ref_atomic  */
#line 1105 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5262 "conflict_test.cpp"
    break;

  case 268: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1109 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5271 "conflict_test.cpp"
    break;

  case 269: /* table_ref_name: table_name opt_table_alias  */
#line 1114 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5283 "conflict_test.cpp"
    break;

  case 270: /* table_ref_name_no_alias: table_name  */
#line 1122 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5293 "conflict_test.cpp"
    break;

  case 271: /* table_name: IDENTIFIER  */
#line 1128 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5302 "conflict_test.cpp"
    break;

  case 272: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1132 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5311 "conflict_test.cpp"
    break;

  case 273: /* opt_index_name: IDENTIFIER  */
#line 1137 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5317 "conflict_test.cpp"
    break;

  case 274: /* opt_index_name: %empty  */
#line 1138 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5323 "conflict_test.cpp"
    break;

  case 276: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1140 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5329 "conflict_test.cpp"
    break;

  case 278: /* opt_table_alias: %empty  */
#line 1142 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5335 "conflict_test.cpp"
    break;

  case 279: /* alias: AS IDENTIFIER  */
#line 1144 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5341 "conflict_test.cpp"
    break;

  case 280: /* alias: IDENTIFIER  */
#line 1145 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5347 "conflict_test.cpp"
    break;

  case 282: /* opt_alias: %empty  */
#line 1147 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5353 "conflict_test.cpp"
    break;

  case 283: /* opt_locking_clause: opt_locking_clause_list  */
#line 1153 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5359 "conflict_test.cpp"
    break;

  case 284: /* opt_locking_clause: %empty  */
#line 1154 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5365 "conflict_test.cpp"
    break;

  case 285: /* opt_locking_clause_list: locking_clause  */
#line 1156 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5374 "conflict_test.cpp"
    break;

  case 286: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1160 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5383 "conflict_test.cpp"
    break;

  case 287: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1165 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5394 "conflict_test.cpp"
    break;

  case 288: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1171 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5405 "conflict_test.cpp"
    break;

  case 289: /* row_lock_mode: UPDATE  */
#line 1178 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5411 "conflict_test.cpp"
    break;

  case 290: /* row_lock_mode: NO KEY UPDATE  */
#line 1179 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5417 "conflict_test.cpp"
    break;

  case 291: /* row_lock_mode: SHARE  */
#line 1180 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5423 "conflict_test.cpp"
    break;

  case 292: /* row_lock_mode: KEY SHARE  */
#line 1181 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5429 "conflict_test.cpp"
    break;

  case 293: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1183 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5435 "conflict_test.cpp"
    break;

  case 294: /* opt_row_lock_policy: NOWAIT  */
#line 1184 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5441 "conflict_test.cpp"
    break;

  case 295: /* opt_row_lock_policy: %empty  */
#line 1185 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5447 "conflict_test.cpp"
    break;

  case 297: /* opt_with_clause: %empty  */
#line 1191 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5453 "conflict_test.cpp"
    break;

  case 298: /* with_clause: WITH with_description_list  */
#line 1193 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5459 "conflict_test.cpp"
    break;

  case 299: /* with_description_list: with_description  */
#line 1195 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5468 "conflict_test.cpp"
    break;

  case 300: /* with_description_list: with_description_list ',' with_description  */
#line 1199 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5477 "conflict_test.cpp"
    break;

  case 301: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1204 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5487 "conflict_test.cpp"
    break;

  case 302: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1214 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5499 "conflict_test.cpp"
    break;

  case 303: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1221 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5512 "conflict_test.cpp"
    break;

  case 304: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1229 "bison_parser.y"
                                                                                 {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 5532 "conflict_test.cpp"
    break;

  case 305: /* opt_join_type: INNER  */
#line 1245 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5538 "conflict_test.cpp"
    break;

  case 306: /* opt_join_type: LEFT OUTER  */
#line 1246 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5544 "conflict_test.cpp"
    break;

  case 307: /* opt_join_type: LEFT  */
#line 1247 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5550 "conflict_test.cpp"
    break;

  case 308: /* opt_join_type: RIGHT OUTER  */
#line 1248 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5556 "conflict_test.cpp"
    break;

  case 309: /* opt_join_type: RIGHT  */
#line 1249 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5562 "conflict_test.cpp"
    break;

  case 310: /* opt_join_type: FULL OUTER  */
#line 1250 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5568 "conflict_test.cpp"
    break;

  case 311: /* opt_join_type: OUTER  */
#line 1251 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5574 "conflict_test.cpp"
    break;

  case 312: /* opt_join_type: FULL  */
#line 1252 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5580 "conflict_test.cpp"
    break;

  case 313: /* opt_join_type: CROSS  */
#line 1253 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5586 "conflict_test.cpp"
    break;

  case 314: /* opt_join_type: %empty  */
#line 1254 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5592 "conflict_test.cpp"
    break;

  case 318: /* ident_commalist: IDENTIFIER  */
#line 1265 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5601 "conflict_test.cpp"
    break;

  case 319: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1269 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5610 "conflict_test.cpp"
    break;


#line 5614 "conflict_test.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1275 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
