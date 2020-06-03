#pragma once

#if defined _WIN32 || defined __CYGWIN__
# ifdef WIN_EXPORT
#  ifdef __GNUC__
#   define DRAKOENGINELIB_EXPORTED __attribute__((dllexport))
#  else
#   define DRAKOENGINELIB_EXPORTED __declspec(dllexport)
#  endif
# else
#  ifdef __GNUC__
#   define DRAKOENGINELIB_EXPORTED __attribute__((dllimport))
#  else
#   define DRAKOENGINELIB_EXPORTED __declspec(dllimport)
#  endif
# endif
# define DRAKOENGINELIB_NOT_EXPORTED
#else
# if __GNUC__ >= 4
#  define DRAKOENGINELIB_EXPORTED __attribute__((visibility("default")))
#  define DRAKOENGINELIB_NOT_EXPORTED __attribute__((visibility("hidden")))
# else
#  define DRAKOENGINELIB_EXPORTED
#  define DRAKOENGINELIB_NOT_EXPORTED
# endif
#endif
