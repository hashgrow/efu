#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "common.h"
#include "platform.h"

int main(int argc, char * argv[])
{
	bool ok;

	ok=true;
	#ifdef PLATFORM_LINUX
		printf("linux %d\n",ok);
	#endif
	#ifdef PLATFORM_WINDOWS
		printf("windows\n");
	#endif

	return 0;
}
