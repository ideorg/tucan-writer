//https://api.kde.org/frameworks/ktexteditor/html/
#include "mainwindow.h"
#include <KTextEditor/Document>
#include <KTextEditor/Editor>
#include <KTextEditor/View>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto editor = KTextEditor::Editor::instance();
    auto doc = editor->createDocument(this);
    auto view = doc->createView(this);
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{
}

