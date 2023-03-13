
#include "gisnebenbestimmungengui.h"
#include "qgshelp.h"

//qt includes

//standard includes

GisNebenbestimmungenGui::GisNebenbestimmungenGui( QWidget *parent, Qt::WindowFlags fl ): QDialog( parent, fl ){
  setupUi( this );

  textBrowser->setText("Testitest");
}

GisNebenbestimmungenGui::~GisNebenbestimmungenGui(){
}

void GisNebenbestimmungenGui::on_buttonBox_accepted(){
  //close the dialog
  accept();
}

void GisNebenbestimmungenGui::on_buttonBox_rejected(){
  reject();
}

