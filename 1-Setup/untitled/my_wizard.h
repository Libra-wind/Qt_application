#ifndef MY_WIZARD_H
#define MY_WIZARD_H

#include <QWidget>
#include <QWizard>
class QWizardPage;
class QPixmap;
class my_wizard : public QWizard
{
public:
    my_wizard(QWidget *parent = 0);

private:
    QWizardPage *page;
//    QPixmap *banner;
};

#endif // MY_WIZARD_H
