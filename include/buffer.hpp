#ifndef NUMBERINGS_BUFFER_HPP
#define NUMBERINGS_BUFFER_HPP

namespace numberings
{

template <class T> struct buffer
{
    const char value[sizeof(T)];
};

} // namespace numberings

#endif // NUMBERINGS_BUFFER_HPP
