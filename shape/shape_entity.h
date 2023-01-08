#ifndef SHAPEE_H
#define SHAPEE_H

#include "../interfaces/storable.h"
#include "../utils/color.h"

#include <memory>

namespace my
{

/**
 * @brief The IShapeEntity interface
 */
class IShapeEntity : public IStorable
{
public:
    using Ptr = std::unique_ptr<IShapeEntity>;

    virtual ~IShapeEntity() = default;

    /**
     * @brief Color setter
     * @param[in] color Color to be set
     */
    void color(Color color)
    {
        m_color = color;
    }

    /**
     * @brief Color getter
     * @return Current shape color
     */
    Color color() const
    {
        return m_color;
    }

private:
    Color m_color;
};

} // namespace my

#endif // SHAPEE_H
