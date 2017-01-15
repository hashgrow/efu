#ifndef EFU_COMMON_HEADER
#define EFU_COMMON_HEADER

typedef unsigned char      byte;
typedef unsigned short     half;
typedef unsigned int       word;
typedef unsigned long long wide;

#ifdef ENTRY_PRINT
#define print_entry(fmt, args...)   fprintf(stderr,ENTRY_TAG fmt "\n", ##args)
#else
#define print_entry(fmt, args...)
#endif

#ifdef TRACE_PRINT
#define print_trace(fmt, args...)   fprintf(stderr,TRACE_TAG fmt "\n", ##args)
#else
#define print_trace(fmt, args...)
#endif

#ifdef DEBUG_PRINT
#define print_debug(fmt, args...)   fprintf(stderr,DEBUG_TAG fmt "\n", ##args)
#else
#define print_debug(fmt, args...)
#endif

#define print_info(fmt, args...)    fprintf(stderr,fmt "\n", ##args)
#define print_warning(fmt, args...) fprintf(stderr,"warning: " fmt "\n", ##args)
#define print_error(fmt, args...)   fprintf(stderr,"%s(): " fmt "\n", __FUNCTION__, ##args)
#define lib_error(fmt, args...)     fprintf(stderr,fmt "\n", ##args)
#define back_trace()                fprintf(stderr,"%s(): [%d]\n", __FUNCTION__, __LINE__)

#endif
