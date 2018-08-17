#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QComboBox>
#include <QLineEdit>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();
    ~Window();
};

#endif // WINDOW_H
