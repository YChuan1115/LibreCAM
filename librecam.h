/*****************************************************************************/
/*  librecam.h - plugin example for LibreCAD                                 */
/*                                                                           */
/*  Copyright (C) 2011 R. van Twisk ries@vantwisk.n                          */
/*                                                                           */
/*  This library is free software, licensed under the terms of the GNU       */
/*  General Public License as published by the Free Software Foundation,     */
/*  either version 2 of the License, or (at your option) any later version.  */
/*  You should have received a copy of the GNU General Public License        */
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.    */
/*****************************************************************************/

#ifndef librecamPROFILE_H
#define librecamPROFILE_H

#include "qc_plugininterface.h"
#include <QDialog>
#include <QList>
class QLineEdit;
class QMainWindow;
class CAMProfileWidget;

class librecam : public QObject, QC_PluginInterface
{
    Q_OBJECT
     Q_INTERFACES(QC_PluginInterface)

 public:
    librecam();
    ~librecam();
    virtual PluginCapabilities getCapabilities() const;
    virtual QString name() const;
    virtual void execComm(Document_Interface *doc,
                                       QWidget *mainWindow, QString cmd);
    void showProfileTools(Document_Interface *doc, QMainWindow *mainWindow);

private:
    CAMProfileWidget *camProfileWidget;
};

#endif // librecamPROFILE_H
