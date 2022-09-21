#pragma once

#include <QAbstractScrollArea>
#include <QPaintEvent>
#include <QPainter>

class BrowserView : public QAbstractScrollArea {
    Q_OBJECT

    public:
        BrowserView();
        virtual ~BrowserView() override;

        virtual void paintEvent(QPaintEvent* event) override;
        virtual void resizeEvent(QResizeEvent* event) override;
    
    private:
        QImage render_browser_image();

        int p_width;
        int p_height;
};