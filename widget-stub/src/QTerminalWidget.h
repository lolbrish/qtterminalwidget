// -*- Mode: C++; -*-
#ifndef QTerminalWidget_h
#define QTerminalWidget_h

#include <QWidget>

namespace QtTerm {

class QTerminalWidget : public QWidget {
    Q_OBJECT

public:
    QTerminalWidget(QWidget * parent = 0);
    ~QTerminalWidget();

protected:
    void paintEvent(QPaintEvent *event);

private:
  QPainter* painter;  
  QFont* textFont;
  QString string;
};

};

#endif
