#ifndef PLIBC_LOGGER_H
#define PLIBC_LOGGER_H

/*
 * Logger
 * with this lib you can use logger in C
 *
 * to use the logger with structure you need to define the macro :
 * #define PLIBC_LOGGER_STRUCT
 * use the logger struct like this:
 * struct logger log* = Logger_createDefault();
 * log->info(fmt, ...);
 * log->warn(fmt, ...);
 * log->error(fmt, ...);
 * log->debug(fmt, ...);
 * to use the logger with functions you need to define the macro :
 * #define PLIBC_LOGGER_FUNC
 * use the logger functions like this:
 * Logger_info(fmt, ...);
 * Logger_warn(fmt, ...);
 * Logger_error(fmt, ...);
 * Logger_debug(fmt, ...);
 * 
 * there is also functions that throw exceptions:
 * for struct version :
 * Logger_createExcept(); // this function can throw an exception
 * for functions version:
 * Logger_infoExcept(fmt, ...);
 * Logger_warnExcept(fmt, ...);
 * Logger_errorExcept(fmt, ...);
 * Logger_debugExcept(fmt, ...);
 */

#include "logger/macros.h"
#include "logger/base.h"

#endif