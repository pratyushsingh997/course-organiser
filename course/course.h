#ifndef _COURSE_H_
#define _COURSE_H_

struct course {
    long id;
    char code[16];
    char name[64];
    float credit;
};

// initializes a course object
struct course *init_course(void);
// course object setter
void set_course(struct course *foo, char code[], char name[], float credit);
// set_course() wrapper
struct course *input_course(struct course *foo);
// prints a course object
void print_course(struct course *foo);

#endif
