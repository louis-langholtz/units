// Boost.Units - A C++ library for zero-overhead dimensional analysis and
// unit/quantity manipulation and conversion
//
// Copyright (C) 2017 Louis Langholtz
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_INVERSE_MOMENT_OF_INERTIA_DERIVED_DIMENSION_HPP
#define BOOST_UNITS_INVERSE_MOMENT_OF_INERTIA_DERIVED_DIMENSION_HPP

#include <boost/units/derived_dimension.hpp>
#include <boost/units/physical_dimensions/moment_of_inertia.hpp>

namespace boost {

namespace units {

/// derived dimension for inverse moment of inertia : L^-2 M^-1 QP^2
typedef derived_dimension<moment_of_inertia_dimension,-1>::type inverse_moment_of_inertia_dimension;

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_INVERSE_MOMENT_OF_INERTIA_DERIVED_DIMENSION_HPP
