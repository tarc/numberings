#ifndef NUMBERINGS_DETAIL_SIZE_OF_HPP
#define NUMBERINGS_DETAIL_SIZE_OF_HPP

#include <boost/mpl/size_t.hpp>

namespace numberings
{

namespace detail
{

template <typename T> struct size_of : boost::mpl::size_t<sizeof(T)>
{
};

} // namespace detail

} // namespace numberings

#endif // NUMBERINGS_DETAIL_SIZE_OF_HPP
