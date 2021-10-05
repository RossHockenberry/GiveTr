#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QLabel>
#include <QLayout>
#include <QTableWidget>
#include <QListWidget>
#include "mydataobject.h"
#include "simplemessagebox.h"
#include "settingsdialog.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QSettings               *   ReturnSettings() { return pSettings; };
private:
    bool                    InitObject();
    bool                    InitWidgets();
    void                    InitMenuAndToolbar();
    bool                    SetLayout();
    bool                    SetSlots();
    bool                    LoadSettings();
    void                    EditSettings();

//  Enable and Disable Sections.
    void                    EnableTransFields();
    void                    DisableTransFields();
    void                    EnableAccountFields();
    void                    DisableAccountFields();
    void                    EnableFields() {
                                EnableTransFields();
                                EnableAccountFields(); }
    void                    DisableFields() {
                                DisableTransFields();
                                DisableAccountFields(); }
    void                    ClearFields() {         //  Might as well do here.
                                ClearAccountFields();
                                ClearTransFields(); };
    void                    ClearAccountFields();
    void                    ClearTransFields();
    void                    FillAccountFields();
    void                    FillTransTableHeaders();

//  Other member functions.
    void                    FillAccountList();
    void                    FillTransTable();
    bool                    WriteNewAccountRecord();
    bool                    WriteNewTransactionRecord();
    bool                    UpdateAccountRecord();

//  Database.
    MyDataObject            *   pData;
    bool                    bDbOpenFlag = false;
    std::vector<stTypeData> vAccounts;
    std::string             sSelectedAccount;       //  Account Name.
    int                     iSelectedAccount = -1;  //  Holds the table ID value.
    MyFlag                  bEditFlag;

//  Data Members.
    std::string sDBDriver;                          //  Driver type.
    std::string sDBName;                            //  Database connection strings.
    std::string sDBHost;
    std::string sDBAddress;
    std::string sDBPort;
    std::string sDBUser;
    std::string sDBPassword;

    double      dPreviousTotal = 0.0;               //  Used to compare in case record not correct.
    double      dAccountTotal = 0.0;                //  Used to hold account total.
                                                    //  Redo every time.

    QRect       * pScreenRect;                      //  Screen and Window stuff.
    QScreen     * pScreen;
    QWindow     * pWindow;

    QWidget                 *   pCentralWidget;
    QDate                   *   pDate;
    QSettings               *   pSettings;
    QAction                 *   pEditSettings;

    QTableWidget            *   pTransTable;
    QListWidget             *   pAccountList;

// Transaction Fields.
    QLineEdit               *   pAmount;
    QLineEdit               *   pCheckNumber;
    QDateTimeEdit           *   pTransDate;
    QComboBox               *   pPaidHow;
    QTextEdit               *   pComment;

//  Account Fields.
    QDateTimeEdit           *   pAccountDate;
    QLineEdit               *   pAccountName;
    QTextEdit               *   pAccountDesc;
    QLineEdit               *   pAccountTotal;

    QToolBar                *   pMainToolBar;
    QPushButton             *   pNewAccountButton;
    QPushButton             *   pNewTransButton;
    QPushButton             *   pLastGivenReport;
    QPushButton             *   pSaveButton;
    QPushButton             *   pCancelButton;
    QPushButton             *   pDoneButton;

    QLabel                  *   pTransTableLabel;
    QLabel                  *   pAccountListLabel;
    QLabel                  *   pSelectedAccountLabel;
    QLabel                  *   pPayeeLabel;
    QLabel                  *   pBlankLabel;

    QMenu                   *   pFileMenu;
    QMenu                   *   pToolMenu;
    QMenu                   *   pHelpMenu;

    QAction                 *   pLeave;

    QDoubleValidator        *   pMoneyValidator;
    QVBoxLayout             *   pMainLayout;
    QHBoxLayout             *   pUpperLayout;
    QFormLayout             *   pUpperLeftLayout;
    QVBoxLayout             *   pUpperRightLayout;
    QHBoxLayout             *   pButtonLayout;
    QHBoxLayout             *   pLowerLayout;
    QVBoxLayout             *   pLowerLeftLayout;
    QFormLayout             *   pAccountLayout;
    QVBoxLayout             *   pLowerRightLayout;

public slots:
    void                    AccountListDoubleClicked(QListWidgetItem *);
    void                    AccountListClicked(QListWidgetItem *);
    void                    AccountFieldChanged();          //  Transaction being entered.'
    void                    MoneyFieldDone();               //  Format field.
    std::string             MoneyFormat(std::string);       //  Format string as money.
    bool                    NewTransaction();
    bool                    NewAccount();
    bool                    CancelButton();
    bool                    SaveButton();
    bool                    DoneButton();
};
#endif // MAINWINDOW_H
