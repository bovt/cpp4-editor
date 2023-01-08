#ifndef APPLICATION_H
#define APPLICATION_H

#include "../document/document_entity.h"
//#include "../document/document_view.h"

#include <string>
#include <unordered_set>
#include <cassert>

namespace my
{

/**
 * @brief The Application class
 * A controller for documents
 */
class Application
{
public:
    /**
     * @brief Creates a new empty document entity
     * @return Pointer to a created document entity
     */
    const DocumentEntity::Ptr& create_document_entity()
    {
        auto [it, b_inserted] = m_documentEntities.emplace(std::make_unique<DocumentEntity>());
        assert(b_inserted);
        return *it;
    }

    /**
     * @brief Creates a new empty document view
     * @return Pointer to a created document view
     */
  /*  const DocumentView::Ptr& create_document_view(DocumentEntity::Ptr& docEntity)
    {
        auto [it, b_inserted] = m_documentViews.emplace(std::make_unique<DocumentView>(docEntity));
        assert(b_inserted);
        return *it;
    }
*/


private:
//    std::unordered_set<DocumentView::Ptr> m_documentViews;
    std::unordered_set<DocumentEntity::Ptr> m_documentEntities;
};

} // namespace my

#endif // APPLICATION_H
