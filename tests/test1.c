#include <stdlib.h>
/*********************************/
#include "bool.c"
#include "is_number.c"
#include "log.c"
/*********************************/


void test_bool(const char *s){
  if (is_bool(s)) {
    log_info(AC_RESETALL AC_GREEN AC_REVERSED "string '%s' is a boolean" AC_RESETALL, s);
    bool b = str_to_bool(s);
    log_debug("str_to_bool(%s) => %d (%s)", s, str_to_bool(s), bool_to_str(b));
  }else{
    log_info(AC_RESETALL AC_RED AC_REVERSED "string '%s' is not a boolean" AC_RESETALL, s);
  }
}


int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv) {
  test_bool("True");
  test_bool("true");
  test_bool("false");
  test_bool("False");
  test_bool("on");
  test_bool("off");
  test_bool("0");
  test_bool("1");
  test_bool("-1");
  test_bool("");
  test_bool("x");
}
