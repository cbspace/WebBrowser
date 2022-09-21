#include "BrowserWindow.h"
#include "BrowserView.h"
#include <QApplication>
#include <QWidget>
#include <iostream>
#include <string>
#include "lib/Tree.h"
#include "lib/WebElement.h"

using WebBrowser::BrowserWindow;
using std::cout;
using std::endl;
using std::string;

void test_tree() {
    string test_page_str = "<HTML><HEAD><TITLE>This is a test page</TITLE></HEAD><BODY><P>This is a test paragraph</P></BODY></HTML>";
    cout << test_page_str << endl;

    Tree my_tree;
    TreeNode* primary = my_tree.get_primary();
    TreeNode* html_node = my_tree.create_node_under(primary,WebElement(WebElementTagType::html,"hello html node"));
    cout << html_node->payload.get_payload() << endl;
    TreeNode* head_node = my_tree.create_node_under(html_node,WebElement(WebElementTagType::head,"hello head node"));
    cout << head_node->payload.get_payload() << endl;
}

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    BrowserWindow window_main;
    window_main.setWindowTitle("CBSpace Browser");
    window_main.resize(1024, 768);
    window_main.show();

    BrowserView view;
    window_main.setCentralWidget(&view);

    test_tree();

    return app.exec();
}