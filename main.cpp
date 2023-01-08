#include "application/application.h"

#include <iostream>

int main()
{
//    my::Canvas& canvas = std::cout;
//    my::File& file = std::cout;
    my::Application app;

    const my::DocumentEntity::Ptr& docEntity = app.create_document_entity();
//    const my::DocumentView::Ptr docView = app.create_document_view(docEntity);
/*
    const my::IShapeEntity::Ptr& circleEntity_ptr = docEntity->load_circle_entity();//my::Point{ 100, 150 }, 35);
    const my::IShapeView::Ptr& circleView_ptr = docView->attach_circle_view(circleEntity_ptr);//my::Point{ 100, 150 }, 35);

    circleEntity_ptr->color(my::Color{ 155, 200, 255, 0 });

    docView->render(canvas);
    docEntity->store(file);
*/
 }
