// Boost.Units - A C++ library for zero-overhead dimensional analysis and
// unit/quantity manipulation and conversion
//
// Copyright (C) 2017 Louis Langholtz
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_INVERSE_MASS_BASE_DIMENSION_HPP
#define BOOST_UNITS_INVERSE_MASS_BASE_DIMENSION_HPP

#include <boost/units/derived_dimension.hpp>
#include <boost/units/physical_dimensions/mass.hpp>

namespace boost {

namespace units {

/// derived dimension for inverse mass : M^-1
typedef derived_dimension<mass_base_dimension,-1>::type inverse_mass_dimension;

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_INVERSE_MASS_BASE_DIMENSION_HPP
