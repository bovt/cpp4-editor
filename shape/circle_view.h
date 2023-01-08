#ifndef CIRCLEV_H
#define CIRCLEV_H

#include "shape_view.h"
#include "../utils/point.h"
#include "renderable.h"
#include "сircle_entity.h"

#include <memory>

namespace my
{

/**
 * @brief The Circle View class
 * Represents a circle view on a plane
 */
    class CircleView : public IShapeView
    {
    public:
        /**
         * @brief Constructor from the center point and radius
         * @param[in] center Center point
         * @param[in] radius Radius
         */
        CircleView(Point center, int radius)
                : m_center(center)
                , m_radius(radius)
        {
        }

        CircleView(const CircleView&) = default;
        CircleView& operator=(const CircleView&) = default;
        CircleView(CircleView&&) = default;
        CircleView& operator=(CircleView&&) = default;

        ~CircleView() override = default;

        void render(Canvas& canvas) override
        {
            canvas << "Circle{ " << m_CircleEntity.getColor() << ", " << m_CircleEntity.getCenter() << ", " << m_CircleEntity.getRadius() << " }";
        }

    private:
        CircleEntity m_CircleEntity;
    };

} // namespace my



#endif // CIRCLEV_H
