#include "config.hpp"

namespace numberings
{
    static constexpr const char* name()
    {
        return PROJECT_NAME;
    }

    static constexpr const char* version()
    {
        return PROJECT_VER;
    }

    template<class T>
    struct buffer
    {
        const char value[sizeof(T)];
    };

} // namespace numberings
