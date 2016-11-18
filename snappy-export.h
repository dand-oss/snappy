#ifdef _MSC_VER
    #ifdef SNAPPY_DLL
        #define SNAPPY_EXPORT __declspec(dllexport)
    #elif defined(SNAPPY_STATIC_LIB)
        #define SNAPPY_EXPORT
    #else
        #define SNAPPY_EXPORT __declspec(dllimport)
    #endif
#else
    #define SNAPPY_EXPORT
#endif
