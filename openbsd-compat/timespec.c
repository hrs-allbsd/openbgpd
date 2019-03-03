#include <sys/timespec.h>
#include "openbsd-compat.h"

void
timespecsub(struct timespec *t1, struct timespec *t2, struct timespec *ret)
{

	ret->tv_sec = t1->tv_sec - t2->tv_sec;
	ret->tv_nsec = t1->tv_nsec - t2->tv_nsec;
}
