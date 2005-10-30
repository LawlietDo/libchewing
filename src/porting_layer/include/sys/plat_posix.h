#ifndef PLAT_POSIX_H
#define PLAT_POSIX_H

#ifdef UNDER_POSIX

#include <sys/types.h>

#define PLAT_SEPARATOR "/"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/* plat_mmap.h */
typedef struct plat_mmap {
	int fd;
	void *address;
	size_t sizet;
	int fAccessAttr;
} plat_mmap;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* UNDER_POSIX */
#endif /* PLAT_POSIX_H */

