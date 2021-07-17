#ifndef NUMBERINGS_TYPE_ORDERING_HPP
#define NUMBERINGS_TYPE_ORDERING_HPP

#include <boost/mpl/size_t.hpp>
#include <boost/mpl/sort.hpp>
#include <boost/mpl/vector.hpp>

namespace numberings
{
    template <typename T> struct size_of : boost::mpl::size_t<sizeof(T)>
    {
    };

    template <typename... Ts> struct type_sort
    {
        using vector = boost::mpl::vector<Ts...>;
        using type =
            typename boost::mpl::sort<vector, boost::mpl::less<size_of<boost::mpl::_1>, size_of<boost::mpl::_2>>>::type;
    };

} // namespace numberings

#endif // NUMBERINGS_TYPE_ORDERING_HPP
