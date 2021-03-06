#ifndef _FILE_H_
#define _FILE_H_

#include <stdio.h>

enum mode {
    READ,
    WRITE,
    APPEND,
    OVERWRITE
};

enum db_name {
    COURSE_DB,
    COURSE_DB_BKP,
    INFO_DB
};

FILE* open_db(enum db_name db, enum mode m);
void close_db(FILE* db);
void copy_db(enum db_name db_dest, enum db_name db_src, enum mode write_mode);

#endif
