// -*- Mode: C++; -*-
#ifndef QTerminalWidget_h
#define QTerminalWidget_h

#include <QWidget>
#include "pty/putty.h"

namespace QtTerm {

class QTerminalWidget : public QWidget {
    Q_OBJECT

public:
    QTerminalWidget(QWidget* parent = 0);
    ~QTerminalWidget();

    Terminal* term;
    Config cfg;
    int width;
    int height;
    struct unicode_data ucsdata;
    void* logctx;
    void* ldisc;
    int exited;

protected:
    void paintEvent(QPaintEvent *event);

private:
  QPainter* painter;  
  QFont* textFont;
  QString string;
};

};

#endif
