#ifndef DOCUMENTE_H
#define DOCUMENTE_H

//#include "../shape/shape_entity.h"
//#include "../shape/circle_entity.h"
#include "../interfaces/storable.h"

#include <unordered_set>
#include <cassert>
#include <memory>

namespace my
{

/**
 * @brief The DocumentEntity class
 * Represents a document entity with shapes
 */
class DocumentEntity : public IStorable
{
public:
    using Ptr = std::unique_ptr<DocumentEntity>;

    DocumentEntity() = default;
    virtual ~DocumentEntity() = default;
    void store(File& file) override
    {
/*
        for (const IShapeEntity::Ptr& shapeEntity : m_shapesEntity)
        {
            file->store(file);
            file << std::endl;
        }
*/    }

    void load(File& file, const std::string& objectName) override
    {
        return;
    }



    /**
     * @brief Loads a circle to the document
     * @param[in] Circle center
     * @param[in] Circle radius
     * @return Pointer to the added circle
     */
 /*   const IShapeEntity::Ptr& load_circle_entity(Point center, int radius)
    {
        auto [it, b_inserted] = m_shapesEntity.emplace(std::make_unique<Circle>(center, radius));
        assert(b_inserted);
        return *it;
    }

    /**
     * @brief Exclides the given shape
     * @param[in] shape Shape to be removed
     * @return `true` if a remove had place, `false` otherwise
     */
 /*   bool remove_shape(const IShapeEntity::Ptr& shapeEntity)
    {
        std::size_t removed = m_shapesEntity.erase(shapeEntity);
        if (removed == 0)
            return false;
        return true;
    }
private:
    std::unordered_set<IShapeEntity::Ptr> m_shapesEntity;
*/
};

} // namespace my

#endif // DOCUMENTE_H
