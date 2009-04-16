// Copyright (C) 2009 by Thomas Moulard, FIXME.
//
// This file is part of the liboptimization.
//
// liboptimization is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// liboptimization is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with liboptimization.  If not, see <http://www.gnu.org/licenses/>.

/**
 * \brief Declaration of the QuadraticFunction class.
 */

#ifndef OPTIMIZATION_QUADRATIC_FUNCTION_HH
# define OPTIMIZATION_QUADRATIC_FUNCTION_HH
# include <limits>

# include <liboptimization/twice-derivable-function.hh>

namespace optimization
{
  /// Define a quadratic function.
  class QuadraticFunction : public TwiceDerivableFunction
  {
  public:
    QuadraticFunction (size_type n, size_type m = 1) throw ();

    virtual std::ostream& print (std::ostream&) const throw ();
  };

} // end of namespace optimization

#endif //! OPTIMIZATION_QUADRATIC_FUNCTION_HH