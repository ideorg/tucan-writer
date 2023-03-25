
#ifndef KATE_PRIVATE_EXPORT_H
#define KATE_PRIVATE_EXPORT_H

#ifdef KATEPRIVATE_STATIC_DEFINE
#  define KATE_PRIVATE_EXPORT
#  define KATEPRIVATE_NO_EXPORT
#else
#  ifndef KATE_PRIVATE_EXPORT
#    ifdef kateprivate_EXPORTS
        /* We are building this library */
#      define KATE_PRIVATE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KATE_PRIVATE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KATEPRIVATE_NO_EXPORT
#    define KATEPRIVATE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KATEPRIVATE_DEPRECATED
#  define KATEPRIVATE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KATEPRIVATE_DEPRECATED_EXPORT
#  define KATEPRIVATE_DEPRECATED_EXPORT KATE_PRIVATE_EXPORT KATEPRIVATE_DEPRECATED
#endif

#ifndef KATEPRIVATE_DEPRECATED_NO_EXPORT
#  define KATEPRIVATE_DEPRECATED_NO_EXPORT KATEPRIVATE_NO_EXPORT KATEPRIVATE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KATEPRIVATE_NO_DEPRECATED
#    define KATEPRIVATE_NO_DEPRECATED
#  endif
#endif

#endif /* KATE_PRIVATE_EXPORT_H */
