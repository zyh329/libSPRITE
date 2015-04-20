#ifndef __UNITS_METERS_H__
#define __UNITS_METERS_H__

#include <math.h>
#include "base/types.h"

namespace units
{

    /**
     * Forward declataration of class.
     */
    class Kilometers;

    class Meters
    {
        public:

            /**
             * Constructor.
             * @param v Number of seconds.
             * @satisfies{units-8.1}
             * @satisfies{units-8.2}
             * @satisfies{units-8.4}
             */
            explicit Meters(double v = 0.0)
                : m_value(v)
            {
            }

            /**
             * Constructor.
             * @satisfies{units-8.11}
             */
            explicit Meters(const Kilometers& n);

            /**
             * Type conversion to double.
             * @satisfies{units-8.3}
             * @satisfies{units-8.5}
             */
            operator double() const
            {
                return m_value;
            }

            /**
             * Type conversion from Meters to Kilometers.
             * @satisfies{units-8.10}
             */
            units::Kilometers toKilometers() const;

            /**
             * Overload operator+=
             * @param rhs Right hand side of the operation.
             * @return This instance with the right hand side value added.
             * @satisfies{units-8.6}
             */
            Meters& operator+=(const Meters& rhs)
            {
                m_value += rhs.m_value;

                return *this;
            }


            /**
             * Overload operator-=
             * @param rhs Right hand side of the operation.
             * @return This instance with the right hand side value subtracted.
             * @satisfies{units-8.7}
             */
            Meters& operator-=(const Meters& rhs)
            {
                m_value -= rhs.m_value;

                return *this;
            }


            /**
             * Overload operator*=
             * @param rhs Right hand side of the operation.
             * @return This instance divided by the right hand side.
             * @satisfies{units-8.8}
             */
            Meters& operator*=(const Meters& rhs)
            {
                m_value *= rhs.m_value;

                return *this;
            }


            /**
             * Overload operator/=
             * @param rhs Right hand side of the operation.
             * @return This instance divided by the right hand side.
             * @satisfies{units-8.9}
             */
            Meters& operator/=(const Meters& rhs)
            {
                m_value /= rhs.m_value;

                return *this;
            }

        private:

            /**
             * Stored value.
             */
            double m_value;

    };

} // namespace

#endif // __UNITS_METERS_H__
