#ifndef CIRCLEE_H
#define CIRCLEE_H

#include "../interfaces/storable.h"
#include "shape_view.h"
#include "../utils/point.h"

#include <memory>

namespace my
{

/**
 * @brief The CircleEntity class
 * Represents a circle entity
 */
    class CircleEntity : public IShapeEntity
    {
    public:
        /**
         * @brief Constructor from the center point and radius
         * @param[in] center Center point
         * @param[in] radius Radius
         */
        CircleEntity(Point center, int radius)
                : m_center(center)
                , m_radius(radius)
        {
        }

        CircleEntity(const CircleEntity&) = default;
        CircleEntity& operator=(const CircleEntity&) = default;
        CircleEntity(CircleEntity&&) = default;
        CircleEntity& operator=(CircleEntity&&) = default;

        ~CircleEntity() override = default;

        void store(File& file) override
        {
            file << "Store Circle{ " << color() << ", " << m_center << ", " << m_radius << " }";
        }

    private:
        Point m_center;
        int m_radius;
    };

} // namespace my

#endif // CIRCLEE_H
