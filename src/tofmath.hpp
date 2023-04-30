#include <stdlib.h>
#include <string>
#include <cmath>

namespace tof_math
{
    namespace coordinates
    {
        class integers_coordinates
        {
        public:
            int x;
            int y;
            integers_coordinates(int __x, int __y)
            {
                this->x = __x;
                this->y = __y;
            }
        };
        class float_coordinates
        {
        public:
            float x;
            float y;

            float_coordinates(float __x, float __y)
            {
                this->x = __x;
                this->y = __y;
            }
        };
    }

    class powequations
    {
    public:
        static float calc_delta(const float __a, const float __b, const float __c)
        {
            return sqrt(((__b * __b) + (-4 * __a * __c)));
        }

        static float calc_root1(const float __a, const float __b, const float __c)
        {
            return ((-__b + calc_delta(__a, __b, __c)) / (2 * __a));
        }

        static float calc_root2(const float __a, const float __b, const float __c)
        {
            return ((-__b - calc_delta(__a, __b, __c)) / (2 * __a));
        }
    };
    class pythagoras_theorem
    {
    public:
        static float solve_a(float __b, float __c)
        {
            return sqrt((pow(__b, 2) + pow(__c, 2)));
        }

        static float solve_b(float __a, float __c)
        {
            return sqrt((pow(__a, 2) - pow(__c, 2)));
        }

        static float solve_c(float __a, float __b)
        {
            return sqrt((pow(__a, 2) - pow(__b, 2)));
        }
    };

};