#ifndef __KEYUTILS_GLUE__SYS_UNISTD_H__
#define __KEYUTILS_GLUE__SYS_UNISTD_H__

#include_next <sys/unistd.h>
#include <sys/syscall.h>

#ifndef __NR_add_key
#define __NR_add_key           286
#endif

#ifndef __NR_request_key
#define __NR_request_key       287
#endif

#ifndef __NR_keyctl
#define __NR_keyctl            288
#endif

#endif /* __KEYUTILS_GLUE__SYS_UNISTD_H__ */
