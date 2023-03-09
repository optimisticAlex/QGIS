/***************************************************************************
 *   Copyright (C) 2003 by Tim Sutton                                      *
 *   tim@linfiniti.com                                                     *
 *                                                                         *
 *   This is a plugin generated from the QGIS plugin template              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/
#include "gisnebenbestimmungengui.h"
#include "qgshelp.h"

//qt includes

//standard includes

GisNebenbestimmungenGui::GisNebenbestimmungenGui( QWidget *parent, Qt::WindowFlags fl ): QDialog( parent, fl ){
  setupUi( this );
  connect( buttonBox, &QDialogButtonBox::helpRequested, this, &GisNebenbestimmungenGui::showHelp );

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

void GisNebenbestimmungenGui::showHelp(){
  QgsHelp::openHelp( QStringLiteral( "plugins/plugins.html#GisNebenbestimmungen" ) );
}

