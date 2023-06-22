#ifndef PLIBC_LOGGER_BASE_H
#define PLIBC_LOGGER_BASE_H

#ifdef PLIBC_LOGGER_STRUCT

struct logger {
        void (*info)(const char *, ...);
        void (*warn)(const char *, ...);
        void (*error)(const char *, ...);
        void (*debug)(const char *, ...);
}

struct logger *Logger_createDefault();
struct logger *Logger_createExcept();

void loggerFree();

#endif

#ifdef PLIBC_LOGGER_FUNC

void Logger_info(const char* fmt, ...);
void Logger_warn(const char* fmt, ...);
void Logger_error(const char* fmt, ...);
void Logger_debug(const char* fmt, ...);

void Logger_infoExcept(const char* fmt, ...);
void Logger_warnExcept(const char* fmt, ...);
void Logger_errorExcept(const char* fmt, ...);
void Logger_debugExcept(const char* fmt, ...);

#endif

#endif