#include "libb.h"
#include <assert.h>

int test_libb(int argc, char** const argv) {
	assert(libb_func() == 2);
	return 0;
}
