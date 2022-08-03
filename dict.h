#ifndef DICT_H_INCLUDED
#define DICT_H_INCLUDED

#include "pstring.h"

typedef struct _Dict Dict;

struct _Dict {
  size_t len;
  PString *names;
  PString *values;
};

typedef struct _SimpleDict SimpleDict;

struct _SimpleDict {
  size_t len;
  PString *values;
};


#endif

