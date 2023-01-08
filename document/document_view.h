#ifndef DOCUMENTV_H
#define DOCUMENTV_H

#include "../interfaces/renderable.h"
//#include "../shape/shape_view.h"
//#include "../shape/circle_view.h"

#include <unordered_set>
#include <cassert>

namespace my
{

/**
 * @brief The DocumentView class
 * Represents a document view with shapes
 */
class DocumentView : public IRenderable
{
public:
    using Ptr = std::unique_ptr<DocumentView>;

    DocumentView(DocumentEntity::Ptr &docEntity)
    {
 //       m_docEntity = docEntity;
    }
    virtual ~DocumentView() = default;
/*
    void render(Canvas& canvas) override
    {
        for (const IShapeView::Ptr& shapeView : m_shapesView)
        {
            shape->render(canvas);
            canvas << std::endl;
        }
    }

    /**
     * @brief Adds a circle view to the document view
     * @param[in] Circle center
     * @param[in] Circle radius
     * @return Pointer to the added circle view
     */
 /*   const IShape::Ptr& attach_circle_view(Point center, int radius)
    {
        auto [it, b_inserted] = m_shapeViews.emplace(std::make_unique<CircleView>(center, radius));
        assert(b_inserted);
        return *it;
    }

    /**
     * @brief Removes the given shape view
     * @param[in] shapeView Shape view to be removed
     * @return `true` if a remove had place, `false` otherwise
     */
/*    bool remove_shape(const IShapeView::Ptr& shapeView)
    {
        std::size_t removed = m_shapeViews.erase(shapeView);
        if (removed == 0)
            return false;
        return true;
    }
*/
private:
//    std::unordered_set<IShape::Ptr> m_shapeViews;
    DocumentEntity::Ptr m_docEntity;
};

} // namespace my

#endif // DOCUMENTV_H
