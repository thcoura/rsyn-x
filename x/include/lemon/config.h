#define LEMON_VERSION "1.3.1"
#define LEMON_HAVE_LONG_LONG 1

#define LEMON_HAVE_LP 1
#define LEMON_HAVE_MIP 1
#define LEMON_HAVE_GLPK 1
/* #undef LEMON_HAVE_CPLEX */
/* #undef LEMON_HAVE_SOPLEX */
#define LEMON_HAVE_CLP 1
#define LEMON_HAVE_CBC 1

#define _LEMON_CPLEX 1
#define _LEMON_CLP 2
#define _LEMON_GLPK 3
#define _LEMON_SOPLEX 4
#define _LEMON_CBC 5

#define LEMON_DEFAULT_LP _LEMON_CLP
#define LEMON_DEFAULT_MIP _LEMON_CBC

#define LEMON_USE_PTHREAD 1
/* #undef LEMON_USE_WIN32_THREADS */
