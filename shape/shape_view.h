#ifndef SHAPEV_H
#define SHAPEV_H

#include "../interfaces/renderable.h"
#include "../utils/color.h"

#include <memory>

namespace my
{

/**
 * @brief The IShape interface
 */
class IShape : public IRenderable
{
public:
    using Ptr = std::unique_ptr<IShape>;

    virtual ~IShape() = default;
};

} // namespace my

#endif // SHAPEV_H
