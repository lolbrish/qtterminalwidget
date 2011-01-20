// -*- Mode: C; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*-

#include "QTerminalWidget.h"

#include <QApplication>
#include <QGridLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    QtTerm::QTerminalWidget terminal;

    QGridLayout layout;
    layout.addWidget(&terminal, 0, 0);
    window.setLayout(&layout);
    window.setWindowTitle(QObject::tr("Terminal"));

    window.show();
    return app.exec();    
}
