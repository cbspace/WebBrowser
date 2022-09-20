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
        int p_width;
        int p_height;
};