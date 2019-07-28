#ifndef MY_WIZARD_H
#define MY_WIZARD_H

#include <QWidget>
#include <QWizard>
class QWizardPage;
class QPixmap;
class QLabel;
class QLineEdit;
class my_wizard : public QWizard
{
public:
    my_wizard(QWidget *parent = 0);

private:
    QWizardPage *page;
    QLabel *class_name;
    QLabel *base_class;

    QLineEdit *myPushButton;
    QLineEdit *qPushButton;
};

#endif // MY_WIZARD_H
