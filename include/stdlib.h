#ifndef _STDLIB_H_
#define _STDLIB_H_

#ifndef NULL
#define NULL ((void *)0)
#endif

#define malloc(s) pvPortMalloc(s)
#define free(p) vPortFree(p)

#endif /* !_STDLIB_H_ */
