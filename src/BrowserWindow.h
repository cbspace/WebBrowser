#pragma once

#include "BrowserView.h"
#include <QMainWindow>
#include <QMenuBar>



namespace WebBrowser {

class BrowserWindow : public QMainWindow {
    Q_OBJECT

    public:
        BrowserWindow();
};

}

using WebBrowser::BrowserWindow;