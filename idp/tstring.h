#pragma once

#include <string>
#include <tchar.h>

using namespace std;

typedef basic_string<_TCHAR> tstring;
string  toansi(tstring s);
tstring itotstr(int d);
