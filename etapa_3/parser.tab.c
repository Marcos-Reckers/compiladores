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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "asd.h"

int yylex(void);
void yyerror (char const *mensagem);
extern asd_tree_t *arvore; /* raiz global da AST definida em main.c */

#line 82 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_TIPO = 3,                    /* TK_TIPO  */
  YYSYMBOL_TK_VAR = 4,                     /* TK_VAR  */
  YYSYMBOL_TK_SENAO = 5,                   /* TK_SENAO  */
  YYSYMBOL_TK_DECIMAL = 6,                 /* TK_DECIMAL  */
  YYSYMBOL_TK_SE = 7,                      /* TK_SE  */
  YYSYMBOL_TK_INTEIRO = 8,                 /* TK_INTEIRO  */
  YYSYMBOL_TK_ATRIB = 9,                   /* TK_ATRIB  */
  YYSYMBOL_TK_RETORNA = 10,                /* TK_RETORNA  */
  YYSYMBOL_TK_SETA = 11,                   /* TK_SETA  */
  YYSYMBOL_TK_ENQUANTO = 12,               /* TK_ENQUANTO  */
  YYSYMBOL_TK_COM = 13,                    /* TK_COM  */
  YYSYMBOL_TK_OC_LE = 14,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 15,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 16,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 17,                  /* TK_OC_NE  */
  YYSYMBOL_TK_ID = 18,                     /* TK_ID  */
  YYSYMBOL_TK_LI_INTEIRO = 19,             /* TK_LI_INTEIRO  */
  YYSYMBOL_TK_LI_DECIMAL = 20,             /* TK_LI_DECIMAL  */
  YYSYMBOL_TK_ER = 21,                     /* TK_ER  */
  YYSYMBOL_22_ = 22,                       /* ';'  */
  YYSYMBOL_23_ = 23,                       /* ','  */
  YYSYMBOL_24_ = 24,                       /* '['  */
  YYSYMBOL_25_ = 25,                       /* ']'  */
  YYSYMBOL_26_ = 26,                       /* '('  */
  YYSYMBOL_27_ = 27,                       /* ')'  */
  YYSYMBOL_28_ = 28,                       /* '|'  */
  YYSYMBOL_29_ = 29,                       /* '&'  */
  YYSYMBOL_30_ = 30,                       /* '<'  */
  YYSYMBOL_31_ = 31,                       /* '>'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '%'  */
  YYSYMBOL_37_ = 37,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_programa = 39,                  /* programa  */
  YYSYMBOL_lista_elementos_opt = 40,       /* lista_elementos_opt  */
  YYSYMBOL_lista_elementos = 41,           /* lista_elementos  */
  YYSYMBOL_elemento = 42,                  /* elemento  */
  YYSYMBOL_definicao_funcao = 43,          /* definicao_funcao  */
  YYSYMBOL_tipo = 44,                      /* tipo  */
  YYSYMBOL_parametros_opt = 45,            /* parametros_opt  */
  YYSYMBOL_lista_parametros = 46,          /* lista_parametros  */
  YYSYMBOL_parametro = 47,                 /* parametro  */
  YYSYMBOL_bloco_comandos = 48,            /* bloco_comandos  */
  YYSYMBOL_lista_comandos_opt = 49,        /* lista_comandos_opt  */
  YYSYMBOL_lista_comandos = 50,            /* lista_comandos  */
  YYSYMBOL_comando_simples = 51,           /* comando_simples  */
  YYSYMBOL_declaracao_variavel_global = 52, /* declaracao_variavel_global  */
  YYSYMBOL_declaracao_variavel_local = 53, /* declaracao_variavel_local  */
  YYSYMBOL_inicializacao_opt = 54,         /* inicializacao_opt  */
  YYSYMBOL_literal = 55,                   /* literal  */
  YYSYMBOL_comando_atribuicao = 56,        /* comando_atribuicao  */
  YYSYMBOL_chamada_funcao = 57,            /* chamada_funcao  */
  YYSYMBOL_argumentos_opt = 58,            /* argumentos_opt  */
  YYSYMBOL_lista_argumentos = 59,          /* lista_argumentos  */
  YYSYMBOL_comando_retorno = 60,           /* comando_retorno  */
  YYSYMBOL_comando_condicional = 61,       /* comando_condicional  */
  YYSYMBOL_senao_opt = 62,                 /* senao_opt  */
  YYSYMBOL_comando_enquanto = 63,          /* comando_enquanto  */
  YYSYMBOL_expressao = 64,                 /* expressao  */
  YYSYMBOL_expressao_or = 65,              /* expressao_or  */
  YYSYMBOL_expressao_and = 66,             /* expressao_and  */
  YYSYMBOL_expressao_eq = 67,              /* expressao_eq  */
  YYSYMBOL_expressao_rel = 68,             /* expressao_rel  */
  YYSYMBOL_expressao_add = 69,             /* expressao_add  */
  YYSYMBOL_expressao_mul = 70,             /* expressao_mul  */
  YYSYMBOL_expressao_unaria = 71,          /* expressao_unaria  */
  YYSYMBOL_expressao_primaria = 72         /* expressao_primaria  */
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
typedef yytype_int8 yy_state_t;

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,    36,    29,     2,
      26,    27,    34,    32,    23,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    22,
      30,     2,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    24,     2,    25,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    28,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    57,    58,    62,    63,    73,    74,    78,
      92,    93,    97,    98,    99,   103,   104,   109,   113,   118,
     119,   123,   124,   133,   134,   135,   136,   137,   138,   139,
     144,   149,   166,   167,   171,   172,   176,   187,   199,   200,
     204,   205,   214,   223,   234,   235,   239,   250,   254,   255,
     260,   261,   266,   267,   269,   274,   275,   277,   279,   281,
     286,   287,   289,   294,   295,   297,   299,   304,   305,   306,
     307,   311,   312,   313,   314
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_TIPO", "TK_VAR",
  "TK_SENAO", "TK_DECIMAL", "TK_SE", "TK_INTEIRO", "TK_ATRIB",
  "TK_RETORNA", "TK_SETA", "TK_ENQUANTO", "TK_COM", "TK_OC_LE", "TK_OC_GE",
  "TK_OC_EQ", "TK_OC_NE", "TK_ID", "TK_LI_INTEIRO", "TK_LI_DECIMAL",
  "TK_ER", "';'", "','", "'['", "']'", "'('", "')'", "'|'", "'&'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "$accept", "programa",
  "lista_elementos_opt", "lista_elementos", "elemento", "definicao_funcao",
  "tipo", "parametros_opt", "lista_parametros", "parametro",
  "bloco_comandos", "lista_comandos_opt", "lista_comandos",
  "comando_simples", "declaracao_variavel_global",
  "declaracao_variavel_local", "inicializacao_opt", "literal",
  "comando_atribuicao", "chamada_funcao", "argumentos_opt",
  "lista_argumentos", "comando_retorno", "comando_condicional",
  "senao_opt", "comando_enquanto", "expressao", "expressao_or",
  "expressao_and", "expressao_eq", "expressao_rel", "expressao_add",
  "expressao_mul", "expressao_unaria", "expressao_primaria", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       2,    -6,    23,     5,    -7,   -53,     3,   -53,   -53,    32,
      27,   -53,   -53,     2,    27,   -53,   -53,    31,   -53,   -53,
      19,    50,    56,    46,   -53,    46,    27,    47,    19,   -53,
       4,   -53,   -53,    52,    48,    -1,    49,    -2,   -53,    51,
     -53,     4,   -53,   -53,   -53,   -53,   -53,   -53,    64,    -1,
      53,   -53,   -53,    -1,    -1,    -1,    -1,   -53,   -53,    68,
      54,    55,    41,    15,    29,    20,   -53,   -53,    -1,    -1,
      -1,   -53,   -53,    27,    58,    59,   -53,   -53,   -53,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,   -53,    62,   -53,    57,    65,    47,
     -53,   -53,    55,    41,    15,    15,    29,    29,    29,    29,
      20,    20,   -53,   -53,   -53,    47,   -53,    -1,    28,   -53,
      76,   -53,   -53,   -53,    47,   -53,   -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,     4,     5,     7,     8,     0,
       0,     1,     2,     0,     0,    10,    11,    12,     6,    30,
       0,     0,     0,    14,    15,    13,     0,     0,     0,    17,
      19,     9,    16,     0,     0,     0,     0,     0,    23,     0,
      20,    21,    24,    25,    26,    27,    28,    29,     0,     0,
      73,    34,    35,     0,     0,     0,     0,    72,    71,     0,
      47,    48,    50,    52,    55,    60,    63,    67,     0,     0,
      38,    18,    22,     0,     0,     0,    69,    70,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    39,    40,    32,     0,
      74,    42,    49,    51,    53,    54,    58,    59,    56,    57,
      61,    62,    64,    65,    66,     0,    37,     0,     0,    31,
      44,    46,    41,    33,     0,    43,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,    70,   -53,   -53,   -13,   -53,    71,    66,
     -27,   -53,    61,   -53,   -53,   -53,   -53,   -28,   -53,   -20,
     -53,   -25,   -53,   -53,   -53,   -53,   -26,   -53,    13,    14,
     -19,   -34,   -21,   -52,   -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,    17,    22,    23,    24,
      38,    39,    40,    41,     8,    42,   119,    57,    43,    58,
      95,    96,    45,    46,   125,    47,    97,    60,    61,    62,
      63,    64,    65,    66,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      31,    19,    76,    77,    78,    11,     1,    69,    33,    59,
      44,    34,     9,    29,    35,    12,    36,    50,    51,    52,
       2,    44,    37,    74,    70,    53,    13,    75,    30,    84,
      85,    54,    55,    15,    10,    16,    56,    21,   112,   113,
     114,    14,    93,    94,    20,    86,    87,    51,    52,    21,
     106,   107,   108,   109,    90,    91,    92,    82,    83,    26,
      98,    88,    89,   104,   105,    27,   101,   110,   111,    28,
      48,    30,   120,    73,    49,    68,    71,    79,   118,    70,
     117,   124,    80,    18,    81,    99,   100,   115,   121,   116,
     123,    25,   122,   102,    32,   103,     0,   126,     0,     0,
       0,     0,    72
};

static const yytype_int8 yycheck[] =
{
      27,    14,    54,    55,    56,     0,     4,     9,     4,    35,
      30,     7,    18,    26,    10,    22,    12,    18,    19,    20,
      18,    41,    18,    49,    26,    26,    23,    53,    24,    14,
      15,    32,    33,     6,    11,     8,    37,    18,    90,    91,
      92,     9,    68,    69,    13,    30,    31,    19,    20,    18,
      84,    85,    86,    87,    34,    35,    36,    16,    17,     9,
      73,    32,    33,    82,    83,     9,    79,    88,    89,    23,
      18,    24,    99,     9,    26,    26,    25,     9,    13,    26,
      23,     5,    28,    13,    29,    27,    27,    27,   115,    27,
     118,    20,   117,    80,    28,    81,    -1,   124,    -1,    -1,
      -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    18,    39,    40,    41,    42,    43,    52,    18,
      11,     0,    22,    23,     9,     6,     8,    44,    41,    44,
      13,    18,    45,    46,    47,    46,     9,     9,    23,    44,
      24,    48,    47,     4,     7,    10,    12,    18,    48,    49,
      50,    51,    53,    56,    57,    60,    61,    63,    18,    26,
      18,    19,    20,    26,    32,    33,    37,    55,    57,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    26,     9,
      26,    25,    50,     9,    64,    64,    71,    71,    71,     9,
      28,    29,    16,    17,    14,    15,    30,    31,    32,    33,
      34,    35,    36,    64,    64,    58,    59,    64,    44,    27,
      27,    44,    66,    67,    68,    68,    69,    69,    69,    69,
      70,    70,    71,    71,    71,    27,    27,    23,    13,    54,
      48,    48,    59,    55,     5,    62,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    42,    43,
      44,    44,    45,    45,    45,    46,    46,    47,    48,    49,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      52,    53,    54,    54,    55,    55,    56,    57,    58,    58,
      59,    59,    60,    61,    62,    62,    63,    64,    65,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    71,    71,    71,
      71,    72,    72,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     3,     1,     1,     6,
       1,     1,     0,     2,     1,     1,     3,     3,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     0,     2,     1,     1,     3,     4,     0,     1,
       1,     3,     4,     6,     0,     2,     5,     1,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
       2,     1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* programa: lista_elementos_opt ';'  */
#line 53 "parser.y"
                              { (yyval.node) = (yyvsp[-1].node); arvore = (yyvsp[-1].node); }
#line 1496 "parser.tab.c"
    break;

  case 3: /* lista_elementos_opt: %empty  */
#line 57 "parser.y"
                              { (yyval.node) = NULL; }
#line 1502 "parser.tab.c"
    break;

  case 4: /* lista_elementos_opt: lista_elementos  */
#line 58 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1508 "parser.tab.c"
    break;

  case 5: /* lista_elementos: elemento  */
#line 62 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); /* será a raiz (1a função) */ }
#line 1514 "parser.tab.c"
    break;

  case 6: /* lista_elementos: elemento ',' lista_elementos  */
#line 64 "parser.y"
                              {
                                /* encadeia funções: cada função tem como 1o filho seu 1o comando, e como 2o filho a próxima função */
                                if ((yyvsp[-2].node) == NULL) { (yyval.node) = (yyvsp[0].node); }
                                else if ((yyvsp[0].node) == NULL) { (yyval.node) = (yyvsp[-2].node); }
                                else { asd_add_child((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
                              }
#line 1525 "parser.tab.c"
    break;

  case 7: /* elemento: definicao_funcao  */
#line 73 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1531 "parser.tab.c"
    break;

  case 8: /* elemento: declaracao_variavel_global  */
#line 74 "parser.y"
                              { (yyval.node) = NULL; /* não faz parte da raiz de funções */ }
#line 1537 "parser.tab.c"
    break;

  case 9: /* definicao_funcao: TK_ID TK_SETA tipo parametros_opt TK_ATRIB bloco_comandos  */
#line 79 "parser.y"
                              {
                                /* Nó da função nomeado pelo identificador */
                                asd_tree_t *func = asd_new((yyvsp[-5].valor_lexico).valor);
                                /* child 1: primeiro comando do corpo (bloco_comandos já retorna o 1o comando) */
                                if ((yyvsp[0].node)) asd_add_child(func, (yyvsp[0].node));
                                /* o child 2 (próxima função) será adicionado em lista_elementos */
                                (yyval.node) = func;
                                /* libera a cópia do lexema do yylval (asd_new já fez sua própria cópia) */
                                free((yyvsp[-5].valor_lexico).valor);
                              }
#line 1552 "parser.tab.c"
    break;

  case 10: /* tipo: TK_DECIMAL  */
#line 92 "parser.y"
                              { (yyval.node) = NULL; }
#line 1558 "parser.tab.c"
    break;

  case 11: /* tipo: TK_INTEIRO  */
#line 93 "parser.y"
                              { (yyval.node) = NULL; }
#line 1564 "parser.tab.c"
    break;

  case 12: /* parametros_opt: %empty  */
#line 97 "parser.y"
                              { (yyval.node) = NULL; }
#line 1570 "parser.tab.c"
    break;

  case 13: /* parametros_opt: TK_COM lista_parametros  */
#line 98 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1576 "parser.tab.c"
    break;

  case 14: /* parametros_opt: lista_parametros  */
#line 99 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1582 "parser.tab.c"
    break;

  case 15: /* lista_parametros: parametro  */
#line 103 "parser.y"
                              { (yyval.node) = NULL; }
#line 1588 "parser.tab.c"
    break;

  case 16: /* lista_parametros: lista_parametros ',' parametro  */
#line 105 "parser.y"
                              { (yyval.node) = NULL; }
#line 1594 "parser.tab.c"
    break;

  case 17: /* parametro: TK_ID TK_ATRIB tipo  */
#line 109 "parser.y"
                              { free((yyvsp[-2].valor_lexico).valor); (yyval.node) = NULL; }
#line 1600 "parser.tab.c"
    break;

  case 18: /* bloco_comandos: '[' lista_comandos_opt ']'  */
#line 114 "parser.y"
                { (yyval.node) = (yyvsp[-1].node); /* bloco não vira nó; retorna o 1o comando */ }
#line 1606 "parser.tab.c"
    break;

  case 19: /* lista_comandos_opt: %empty  */
#line 118 "parser.y"
                              { (yyval.node) = NULL; }
#line 1612 "parser.tab.c"
    break;

  case 20: /* lista_comandos_opt: lista_comandos  */
#line 119 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1618 "parser.tab.c"
    break;

  case 21: /* lista_comandos: comando_simples  */
#line 123 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1624 "parser.tab.c"
    break;

  case 22: /* lista_comandos: comando_simples lista_comandos  */
#line 125 "parser.y"
                              {
                                /* constrói lista encadeada de comandos: cada comando aponta para o próximo como um filho adicional */
                                if ((yyvsp[-1].node) == NULL) { (yyval.node) = (yyvsp[0].node); }
                                else { if ((yyvsp[0].node)) asd_add_child((yyvsp[-1].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
                              }
#line 1634 "parser.tab.c"
    break;

  case 23: /* comando_simples: bloco_comandos  */
#line 133 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1640 "parser.tab.c"
    break;

  case 24: /* comando_simples: declaracao_variavel_local  */
#line 134 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1646 "parser.tab.c"
    break;

  case 25: /* comando_simples: comando_atribuicao  */
#line 135 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1652 "parser.tab.c"
    break;

  case 26: /* comando_simples: chamada_funcao  */
#line 136 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1658 "parser.tab.c"
    break;

  case 27: /* comando_simples: comando_retorno  */
#line 137 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1664 "parser.tab.c"
    break;

  case 28: /* comando_simples: comando_condicional  */
#line 138 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1670 "parser.tab.c"
    break;

  case 29: /* comando_simples: comando_enquanto  */
#line 139 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1676 "parser.tab.c"
    break;

  case 30: /* declaracao_variavel_global: TK_VAR TK_ID TK_ATRIB tipo  */
#line 144 "parser.y"
                             { free((yyvsp[-2].valor_lexico).valor); (yyval.node) = NULL; }
#line 1682 "parser.tab.c"
    break;

  case 31: /* declaracao_variavel_local: TK_VAR TK_ID TK_ATRIB tipo inicializacao_opt  */
#line 150 "parser.y"
                              {
                                if ((yyvsp[0].node)) {
                                  /* nome do nó: lexema de TK_COM, isto é, "com" */
                                  asd_tree_t *no = asd_new("com");
                                  asd_tree_t *id = asd_new((yyvsp[-3].valor_lexico).valor);
                                  asd_add_child(no, id);
                                  asd_add_child(no, (yyvsp[0].node)); /* literal */
                                  (yyval.node) = no;
                                } else {
                                  (yyval.node) = NULL; /* sem inicialização não entra na AST */
                                }
                                free((yyvsp[-3].valor_lexico).valor);
                              }
#line 1700 "parser.tab.c"
    break;

  case 32: /* inicializacao_opt: %empty  */
#line 166 "parser.y"
                              { (yyval.node) = NULL; }
#line 1706 "parser.tab.c"
    break;

  case 33: /* inicializacao_opt: TK_COM literal  */
#line 167 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1712 "parser.tab.c"
    break;

  case 34: /* literal: TK_LI_INTEIRO  */
#line 171 "parser.y"
                              { asd_tree_t *lit = asd_new((yyvsp[0].valor_lexico).valor); (yyval.node) = lit; free((yyvsp[0].valor_lexico).valor); }
#line 1718 "parser.tab.c"
    break;

  case 35: /* literal: TK_LI_DECIMAL  */
#line 172 "parser.y"
                              { asd_tree_t *lit = asd_new((yyvsp[0].valor_lexico).valor); (yyval.node) = lit; free((yyvsp[0].valor_lexico).valor); }
#line 1724 "parser.tab.c"
    break;

  case 36: /* comando_atribuicao: TK_ID TK_ATRIB expressao  */
#line 176 "parser.y"
                              {
                asd_tree_t *atr = asd_new(":=");
                                asd_tree_t *id = asd_new((yyvsp[-2].valor_lexico).valor);
                asd_add_child(atr, id);
                if ((yyvsp[0].node)) asd_add_child(atr, (yyvsp[0].node));
                (yyval.node) = atr;
                                free((yyvsp[-2].valor_lexico).valor);
                }
#line 1737 "parser.tab.c"
    break;

  case 37: /* chamada_funcao: TK_ID '(' argumentos_opt ')'  */
#line 188 "parser.y"
                              {
                                char buf[256];
                                snprintf(buf, sizeof(buf), "call %s", (yyvsp[-3].valor_lexico).valor);
                                asd_tree_t *call = asd_new(buf);
                                if ((yyvsp[-1].node)) asd_add_child(call, (yyvsp[-1].node)); /* primeira expressão da lista */
                                (yyval.node) = call;
                                free((yyvsp[-3].valor_lexico).valor);
                              }
#line 1750 "parser.tab.c"
    break;

  case 38: /* argumentos_opt: %empty  */
#line 199 "parser.y"
                              { (yyval.node) = NULL; }
#line 1756 "parser.tab.c"
    break;

  case 39: /* argumentos_opt: lista_argumentos  */
#line 200 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1762 "parser.tab.c"
    break;

  case 40: /* lista_argumentos: expressao  */
#line 204 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1768 "parser.tab.c"
    break;

  case 41: /* lista_argumentos: expressao ',' lista_argumentos  */
#line 206 "parser.y"
                              {
                                /* lista encadeada de expressões (argumentos): cada expressão aponta para a próxima */
                                if ((yyvsp[-2].node) == NULL) { (yyval.node) = (yyvsp[0].node); }
                                else { if ((yyvsp[0].node)) asd_add_child((yyvsp[-2].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
                              }
#line 1778 "parser.tab.c"
    break;

  case 42: /* comando_retorno: TK_RETORNA expressao TK_ATRIB tipo  */
#line 215 "parser.y"
                              {
                                asd_tree_t *ret = asd_new("retorna");
                                if ((yyvsp[-2].node)) asd_add_child(ret, (yyvsp[-2].node));
                                (yyval.node) = ret;
                              }
#line 1788 "parser.tab.c"
    break;

  case 43: /* comando_condicional: TK_SE '(' expressao ')' bloco_comandos senao_opt  */
#line 224 "parser.y"
                              {
                                asd_tree_t *n = asd_new("se");
                                if ((yyvsp[-3].node)) asd_add_child(n, (yyvsp[-3].node));      /* expressão */
                                if ((yyvsp[-1].node)) asd_add_child(n, (yyvsp[-1].node));      /* comando quando verdadeiro */
                                if ((yyvsp[0].node)) asd_add_child(n, (yyvsp[0].node));      /* comando quando falso (opcional) */
                                (yyval.node) = n;
                              }
#line 1800 "parser.tab.c"
    break;

  case 44: /* senao_opt: %empty  */
#line 234 "parser.y"
                              { (yyval.node) = NULL; }
#line 1806 "parser.tab.c"
    break;

  case 45: /* senao_opt: TK_SENAO bloco_comandos  */
#line 235 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1812 "parser.tab.c"
    break;

  case 46: /* comando_enquanto: TK_ENQUANTO '(' expressao ')' bloco_comandos  */
#line 240 "parser.y"
                              {
                                asd_tree_t *n = asd_new("enquanto");
                                if ((yyvsp[-2].node)) asd_add_child(n, (yyvsp[-2].node));
                                if ((yyvsp[0].node)) asd_add_child(n, (yyvsp[0].node));
                                (yyval.node) = n;
                              }
#line 1823 "parser.tab.c"
    break;

  case 47: /* expressao: expressao_or  */
#line 250 "parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1829 "parser.tab.c"
    break;

  case 48: /* expressao_or: expressao_and  */
#line 254 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1835 "parser.tab.c"
    break;

  case 49: /* expressao_or: expressao_or '|' expressao_and  */
#line 256 "parser.y"
                              { asd_tree_t *n = asd_new("|"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1841 "parser.tab.c"
    break;

  case 50: /* expressao_and: expressao_eq  */
#line 260 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1847 "parser.tab.c"
    break;

  case 51: /* expressao_and: expressao_and '&' expressao_eq  */
#line 262 "parser.y"
                              { asd_tree_t *n = asd_new("&"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1853 "parser.tab.c"
    break;

  case 52: /* expressao_eq: expressao_rel  */
#line 266 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1859 "parser.tab.c"
    break;

  case 53: /* expressao_eq: expressao_eq TK_OC_EQ expressao_rel  */
#line 268 "parser.y"
                              { asd_tree_t *n = asd_new("=="); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1865 "parser.tab.c"
    break;

  case 54: /* expressao_eq: expressao_eq TK_OC_NE expressao_rel  */
#line 270 "parser.y"
                              { asd_tree_t *n = asd_new("!="); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1871 "parser.tab.c"
    break;

  case 55: /* expressao_rel: expressao_add  */
#line 274 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1877 "parser.tab.c"
    break;

  case 56: /* expressao_rel: expressao_rel '<' expressao_add  */
#line 276 "parser.y"
                              { asd_tree_t *n = asd_new("<"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1883 "parser.tab.c"
    break;

  case 57: /* expressao_rel: expressao_rel '>' expressao_add  */
#line 278 "parser.y"
                              { asd_tree_t *n = asd_new(">"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1889 "parser.tab.c"
    break;

  case 58: /* expressao_rel: expressao_rel TK_OC_LE expressao_add  */
#line 280 "parser.y"
                              { asd_tree_t *n = asd_new("<="); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1895 "parser.tab.c"
    break;

  case 59: /* expressao_rel: expressao_rel TK_OC_GE expressao_add  */
#line 282 "parser.y"
                              { asd_tree_t *n = asd_new(">="); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1901 "parser.tab.c"
    break;

  case 60: /* expressao_add: expressao_mul  */
#line 286 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1907 "parser.tab.c"
    break;

  case 61: /* expressao_add: expressao_add '+' expressao_mul  */
#line 288 "parser.y"
                              { asd_tree_t *n = asd_new("+"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1913 "parser.tab.c"
    break;

  case 62: /* expressao_add: expressao_add '-' expressao_mul  */
#line 290 "parser.y"
                              { asd_tree_t *n = asd_new("-"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1919 "parser.tab.c"
    break;

  case 63: /* expressao_mul: expressao_unaria  */
#line 294 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1925 "parser.tab.c"
    break;

  case 64: /* expressao_mul: expressao_mul '*' expressao_unaria  */
#line 296 "parser.y"
                              { asd_tree_t *n = asd_new("*"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1931 "parser.tab.c"
    break;

  case 65: /* expressao_mul: expressao_mul '/' expressao_unaria  */
#line 298 "parser.y"
                              { asd_tree_t *n = asd_new("/"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1937 "parser.tab.c"
    break;

  case 66: /* expressao_mul: expressao_mul '%' expressao_unaria  */
#line 300 "parser.y"
                              { asd_tree_t *n = asd_new("%"); if ((yyvsp[-2].node)) asd_add_child(n,(yyvsp[-2].node)); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1943 "parser.tab.c"
    break;

  case 67: /* expressao_unaria: expressao_primaria  */
#line 304 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1949 "parser.tab.c"
    break;

  case 68: /* expressao_unaria: '!' expressao_unaria  */
#line 305 "parser.y"
                              { asd_tree_t *n = asd_new("!"); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1955 "parser.tab.c"
    break;

  case 69: /* expressao_unaria: '+' expressao_unaria  */
#line 306 "parser.y"
                              { asd_tree_t *n = asd_new("+"); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1961 "parser.tab.c"
    break;

  case 70: /* expressao_unaria: '-' expressao_unaria  */
#line 307 "parser.y"
                              { asd_tree_t *n = asd_new("-"); if ((yyvsp[0].node)) asd_add_child(n,(yyvsp[0].node)); (yyval.node) = n; }
#line 1967 "parser.tab.c"
    break;

  case 71: /* expressao_primaria: chamada_funcao  */
#line 311 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1973 "parser.tab.c"
    break;

  case 72: /* expressao_primaria: literal  */
#line 312 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1979 "parser.tab.c"
    break;

  case 73: /* expressao_primaria: TK_ID  */
#line 313 "parser.y"
                              { asd_tree_t *id = asd_new((yyvsp[0].valor_lexico).valor); (yyval.node) = id; free((yyvsp[0].valor_lexico).valor); }
#line 1985 "parser.tab.c"
    break;

  case 74: /* expressao_primaria: '(' expressao ')'  */
#line 314 "parser.y"
                              { (yyval.node) = (yyvsp[-1].node); }
#line 1991 "parser.tab.c"
    break;


#line 1995 "parser.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
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
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
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

#line 317 "parser.y"


#include <stdio.h>
extern int yylineno;
void yyerror (char const *mensagem) {
  fprintf(stderr, "Erro sintático na linha %d: %s\n", yylineno, mensagem);
}
