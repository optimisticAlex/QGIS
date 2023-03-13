
#ifndef GisNebenbestimmungenGUI_H
#define GisNebenbestimmungenGUI_H

#include <QDialog>
#include "ui_gisnebenbestimmungenguibase.h"

/**
@author Tim Sutton
*/
class GisNebenbestimmungenGui : public QDialog, private Ui::GisNebenbestimmungenGuiBase
{
    Q_OBJECT
  public:
    GisNebenbestimmungenGui( QWidget *parent = nullptr, Qt::WindowFlags fl = Qt::WindowFlags() );
    ~GisNebenbestimmungenGui();

  private:
    static const int context_id = 0;

  private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

};

#endif
