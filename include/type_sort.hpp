#ifndef NUMBERINGS_TYPE_SORT_HPP
#define NUMBERINGS_TYPE_SORT_HPP

#include <boost/mpl/size_t.hpp>
#include <boost/mpl/sort.hpp>
#include <boost/mpl/vector.hpp>

#include "detail/size_of.hpp"

namespace numberings
{

template <typename... Ts> struct type_sort
{
    using vector = boost::mpl::vector<Ts...>;
    using type =
        typename boost::mpl::sort<vector, boost::mpl::less<detail::size_of<boost::mpl::_1>, detail::size_of<boost::mpl::_2>>>::type;
};

} // namespace numberings

#endif // NUMBERINGS_TYPE_SORT_HPP
