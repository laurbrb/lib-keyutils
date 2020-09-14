#ifndef __KEYUTILS_GLUE__SYS_ERRNO_H__
#define __KEYUTILS_GLUE__SYS_ERRNO_H__

#include_next <sys/errno.h>

#ifndef ENOKEY
#define	ENOKEY		126 /* Required key not available */
#endif

#ifndef EKEYEXPIRED
#define	EKEYEXPIRED	127	/* Key has expired */
#endif

#ifndef EKEYREVOKED
#define	EKEYREVOKED	128	/* Key has been revoked */
#endif

#ifndef EKEYREJECTED
#define	EKEYREJECTED	129	/* Key was rejected by service */
#endif

#endif /* __KEYUTILS_GLUE__SYS_ERRNO_H__ */
