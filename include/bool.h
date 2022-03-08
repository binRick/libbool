#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define BOOLEAN_VERBOSE_MODE    true

int get_bool(const char *string, bool *value);

char * bool_to_str(bool b);

bool is_bool(const char *s);

bool str_to_bool(const char *s);
