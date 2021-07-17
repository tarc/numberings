#ifndef NUMBERINGS_HPP
#define NUMBERINGS_HPP

#include "buffer.hpp"
#include "config.hpp"
#include "type_sort.hpp"

namespace numberings
{
    static constexpr const char *name()
    {
        return PROJECT_NAME;
    }

    static constexpr const char *version()
    {
        return PROJECT_VER;
    }

} // namespace numberings

#endif // NUMBERINGS_HPP
