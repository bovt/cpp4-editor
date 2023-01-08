#ifndef STORABLE_H
#define STORABLE_H

#include <ostream>

namespace my
{

using File = std::ostream;

class IStorable
{
public:
    /**
     * @brief Stores object on the given file
     * @param[in,out] file File where to render
     */
    virtual void store(File& file) = 0;
    virtual void load(File& file, const std::string& objectName) = 0;
    virtual ~IStorable() = default;
};

} // namespace my

#endif // STORABLE_H
