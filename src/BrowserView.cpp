#include "BrowserView.h"

BrowserView::BrowserView() :
    p_width(1024), 
    p_height(768) 
    {}

BrowserView::~BrowserView() {}

void BrowserView::paintEvent(QPaintEvent* event) {
    QPainter painter(viewport());
    painter.setClipRect(event->rect());

    //QRect output_rect = QRect(0,0,1024,768);

    QImage q_image(p_width, p_height, QImage::Format_RGB32);
    QRgb value = qRgb(255,255,255);
    for (int y=0; y < p_height; y++) {
        for (int x=0; x < p_width; x++) {
            q_image.setPixel(x,y,value);
        }
    }

    painter.drawImage(QPoint(0,0), q_image);
}

void BrowserView::resizeEvent(QResizeEvent* event) {
    p_width = event->size().width();
    p_height = event->size().height();
}