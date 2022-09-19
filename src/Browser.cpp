#include "BrowserWindow.h"
#include "BrowserView.h"
#include <QApplication>
#include <QWidget>
#include <iostream>

using WebBrowser::BrowserWindow;
using std::cout;
using std::endl;

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    BrowserWindow window_main;
    window_main.setWindowTitle("CBSpace Browser");
    window_main.resize(1024, 768);
    window_main.show();

    BrowserView view;
    window_main.setCentralWidget(&view);

    return app.exec();
}