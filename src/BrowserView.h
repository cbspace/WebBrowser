#pragma once

#include <QAbstractScrollArea>

class BrowserView : public QAbstractScrollArea {
    Q_OBJECT

    public:
        BrowserView();
        virtual ~BrowserView() override;
};