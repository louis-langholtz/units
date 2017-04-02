// Boost.Units - A C++ library for zero-overhead dimensional analysis and
// unit/quantity manipulation and conversion
//
// Copyright (C) 2017 Louis Langholtz
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_SI_AREAL_MASS_DENSITY_HPP
#define BOOST_UNITS_SI_AREAL_MASS_DENSITY_HPP

#include <boost/units/systems/si/base.hpp>
#include <boost/units/physical_dimensions/areal_mass_density.hpp>

namespace boost {

namespace units {

namespace si {

typedef unit<areal_mass_density_dimension,si::system>  areal_mass_density;

BOOST_UNITS_STATIC_CONSTANT(kilogram_per_square_meter,areal_mass_density);
BOOST_UNITS_STATIC_CONSTANT(kilograms_per_square_meter,areal_mass_density);
BOOST_UNITS_STATIC_CONSTANT(kilogramme_per_square_metre,areal_mass_density);
BOOST_UNITS_STATIC_CONSTANT(kilogrammes_per_square_metre,areal_mass_density);

} // namespace si

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_SI_AREAL_MASS_DENSITY_HPP
