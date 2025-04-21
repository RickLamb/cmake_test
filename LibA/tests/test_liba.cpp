#include "liba.h"
#include <assert.h>

int test_liba(int argc, char** const argv) {
	assert(liba_func() == 1);
	return 0;
}
