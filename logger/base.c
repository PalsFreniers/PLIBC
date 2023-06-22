#include "base.h"

void Logger_info(const char* fmt, ...) {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        va_list list;
        va_start(list, fmt);
        fprintf(stdout, "[INFO]    %02d/%02d/%04d %02d:%02d:%02d -> ", tm.tm_mday, tm.tm_mon, tm.tm_year, tm.tm_hour, tm.tm_min, tm.tm_sec);
        fprintf(stdout, fmt, list);
        va_end(list);
}

void Logger_warn(const char* fmt, ...) {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        va_list list;
        va_start(list, fmt);
        fprintf(stdout, "[WARNING] %02d/%02d/%04d %02d:%02d:%02d -> ", tm.tm_mday, tm.tm_mon, tm.tm_year, tm.tm_hour, tm.tm_min, tm.tm_sec);
        fprintf(stdout, fmt, list);
        va_end(list);
}

void Logger_error(const char* fmt, ...) {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        va_list list;
        va_start(list, fmt);
        fprintf(stdout, "[ERROR]   %02d/%02d/%04d %02d:%02d:%02d -> ", tm.tm_mday, tm.tm_mon, tm.tm_year, tm.tm_hour, tm.tm_min, tm.tm_sec);
        fprintf(stdout, fmt, list);
        va_end(list);
}

void Logger_debug(const char* fmt, ...)  {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        va_list list;
        va_start(list, fmt);
        fprintf(stdout, "[DEBUG]   %02d/%02d/%04d %02d:%02d:%02d -> ", tm.tm_mday, tm.tm_mon, tm.tm_year, tm.tm_hour, tm.tm_min, tm.tm_sec);
        fprintf(stdout, fmt, list);
        va_end(list);
}

void Logger_infoExcept(const char* fmt, ...) {
        va_list list;
        va_start(list, fmt);
        Logger_info(fmt, list);
        va_end(list);
        throw(logInfoException);
}

void Logger_warnExcept(const char* fmt, ...) {
        va_list list;
        va_start(list, fmt);
        Logger_warn(fmt, list);
        va_end(list);
        throw(logInfoException);
}

void Logger_errorExcept(const char* fmt, ...) {
        va_list list;
        va_start(list, fmt);
        Logger_error(fmt, list);
        va_end(list);
        throw(logInfoException);
}

void Logger_debugExcept(const char* fmt, ...) {
        va_list list;
        va_start(list, fmt);
        Logger_debug(fmt, list);
        va_end(list);
        throw(logInfoException);
}

struct logger Logger_createDefault();
struct logger Logger_createExcept();